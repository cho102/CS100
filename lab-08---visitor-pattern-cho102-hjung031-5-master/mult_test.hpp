#ifndef __MULT_TEST_HPP__
#define __MULT_TEST_HPP__

#include "gtest/gtest.h"

#include "ArithmeticOps.hpp"
#include "op.hpp"

TEST(MultTest, MultTwoNeg) {
    Base* neg1 = new Op(-2);
    Base* neg2 = new Op(-7);
    Base* test = new Mult(neg1, neg2);
    EXPECT_EQ(test->evaluate(), 14);
}

TEST(MultTest, MultPosNeg) {
    Base* pos = new Op(5);
    Base* neg = new Op(-6);
    Base* test = new Mult(pos, neg);
    EXPECT_EQ(test->evaluate(), -30);
}

TEST(MultTest, MultTwoPos) {
    Base* pos1 = new Op(11);
    Base* pos2 = new Op(4);
    Base* test = new Mult(pos1, pos2);
    EXPECT_EQ(test->evaluate(), 44);
}

TEST(MultTest, MultDecimal) {
    Base* dec = new Op(0.5);
    Base* num = new Op(12);
    Base* test= new Mult(dec, num);
    EXPECT_EQ(test->evaluate(), 6);
}

TEST (MultTest, MultZero) {
    Base* zero = new Op(0);
    Base* ten = new Op(10);
    Base* test = new Mult(zero, ten);
    EXPECT_EQ(test->evaluate(), 0);
}

#endif
