#ifndef __ITERATOR_TEST_HPP__
#define __ITERATOR_TEST_HPP__

#include "iterator.hpp"
#include "container.hpp"
#include "base.hpp"
#include "ArithmeticOps.hpp"
#include "visitor.hpp"
#include "op.hpp"
#include "pow.hpp"
#include "preorder_iterator.cpp"

#include "gtest/gtest.h"


TEST(IteratorTest, NullOpTest) {
	Base* num1 = new Op(3);
	
	Iterator* it = num1->create_iterator();

	EXPECT_EQ(it->current(), nullptr);
	EXPECT_EQ(it->is_done(), true);
}

TEST(IteratorTest, NullOpTest2) {
        Base* num1 = new Op(-300);

        Iterator* it = num1->create_iterator();

        EXPECT_EQ(it->current(), nullptr);
        EXPECT_EQ(it->is_done(), true);
}

TEST(IteratorTest, BinaryTestRight) {
        Base* num1 = new Op(3);
        Base* num2 = new Op(7);
        Base* temp = new Add(num1, num2);

        Iterator *it = temp->create_iterator();
	it->next();
        EXPECT_EQ(it->current(), num2);
}

TEST(IteratorTest, BinaryTestLeft) {
        Base* num1 = new Op(3);
        Base* num2 = new Op(7);
        Base* temp = new Pow(num1, num2);

        Iterator *it = temp->create_iterator();

        EXPECT_EQ(it->current(), num1);
}

TEST(IteratorTest, BinaryTestTwoOps1) {
        Base* num1 = new Op(3);
        Base* num2 = new Op(7);
        Base* temp = new Add(num1, num2);
	Base* temp2 = new Mult(temp, num2);

        Iterator *it = temp2->create_iterator();
        it->next();
        EXPECT_EQ(it->current(), num2);
}

TEST(IteratorTest, BinaryTestTwoOps2) {
        Base* num1 = new Op(3);
        Base* num2 = new Op(7);
        Base* temp = new Pow(num1, num2);
	Base* temp2 = new Mult(temp, num2);

        Iterator *it = temp2->create_iterator();

        EXPECT_EQ(it->current(), temp);
}


TEST(VsitorTest, Test1) {
        Base* num1 = new Op(3);
        Base* num2 = new Op(7);
        Pow* temp = new Pow(num1, num2);
        Base* dummy = new Add(temp, num2);

        Iterator *it = new PreorderIterator(dummy);
        CountVisitor *visit = new CountVisitor();

        it->first();
        while(!it->is_done()) {
                Base* phase = it->current();
                phase->accept(visit);
                it->next();
        }

        EXPECT_EQ(visit->op_count(), 2);
        EXPECT_EQ(visit->pow_count(), 1);
        EXPECT_EQ(visit->add_count(), 0);
}

TEST(VisitorTest, Test2) {
	Base* num1 = new Op(6);
        Base* num2 = new Op(2);
	Base* num3 = new Op(4);
        Base* temp = new Mult(num1, num2);
	Base* temp2 = new Add(temp, num3);
        Base* dummy = new Sub(temp2, num3);
        
	Iterator *it = new PreorderIterator(dummy);
        CountVisitor *visit = new CountVisitor();

        it->first();
        while(!it->is_done()) {
                Base* phase = it->current();
                phase->accept(visit);
                it->next();
        }

        EXPECT_EQ(visit->op_count(), 3);
        EXPECT_EQ(visit->mult_count(),1);
        EXPECT_EQ(visit->add_count(), 1);
	EXPECT_EQ(visit->sub_count(), 0);

}

TEST(VisitorTest, Test3) {
        Base* num1 = new Op(6);
        Base* num2 = new Op(2);
        Base* num3 = new Op(4);
	Base* num4 = new Op(5);
	Base* num5 = new Op(8);
	Base* num6 = new Op(1);
        Base* temp = new Mult(num1, num2);
        Base* temp2 = new Add(temp, num3);
	Base* temp3 = new Mult(temp2, num4);
	Base* temp4 = new Div(temp3, num5);
	Base* temp5 = new Sub(temp4, num6);
        Base* dummy = new Sub(temp5, num6);

        Iterator *it = new PreorderIterator(dummy);
        CountVisitor *visit = new CountVisitor();

        it->first();
        while(!it->is_done()) {
                Base* phase = it->current();
                phase->accept(visit);
                it->next();
        }

        EXPECT_EQ(visit->op_count(), 6);
        EXPECT_EQ(visit->mult_count(),2);
        EXPECT_EQ(visit->add_count(), 1);
        EXPECT_EQ(visit->sub_count(), 1);

}


#endif
