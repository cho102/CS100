#ifndef __ADD_TEST__
#define __ADD_TEST__

#include "gtest/gtest.h"

#include "ArithmeticOps.hpp"
#include "op.hpp"

TEST(AddTest, AddTwoNeg) {
    Base* neg1 = new Op(-2);
    Base* neg2 = new Op(-7);
    Base* test = new Add(neg1, neg2);
    EXPECT_EQ(test->evaluate(), -9);
}

TEST(AddTest, AddPosNeg) {
    Base* pos = new Op(5);
    Base* neg = new Op(-6);
    Base* test = new Add(pos, neg);
    EXPECT_EQ(test->evaluate(), -1);
}


TEST(AddTest, AddDecimal) {
    Base* dec = new Op(0.5);
    Base* num = new Op(12);
    Base* test= new Add(dec, num);
    EXPECT_EQ(test->evaluate(), 12.5);
}

TEST (AddTest, AddZero) {
    Base* zero = new Op(0);
    Base* ten = new Op(10);
    Base* test = new Add(zero, ten);
    EXPECT_EQ(test->evaluate(), 10);
}

#endif
