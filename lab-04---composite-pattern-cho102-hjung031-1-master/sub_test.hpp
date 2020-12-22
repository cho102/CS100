#ifndef __SUB_TEST__
#define __SUB_TEST__

#include "gtest/gtest.h"

#include "ArithmeticOps.hpp"
#include "op.hpp"

TEST(SubTest, SubTwoNeg) {
    Base* neg1 = new Op(-2);
    Base* neg2 = new Op(-7);
    Base* test = new Sub(neg1, neg2);
    EXPECT_EQ(test->evaluate(), 5);
}

TEST(SubTest, SubPosNeg) {
    Base* pos = new Op(5);
    Base* neg = new Op(-6);
    Base* test = new Sub(pos, neg);
    EXPECT_EQ(test->evaluate(), 11);
}

TEST(SubTest, SubDecimal) {
    Base* dec = new Op(0.5);
    Base* num = new Op(12);
    Base* test= new Sub(dec, num);
    EXPECT_EQ(test->evaluate(), -11.5);
}

TEST (SubTest, SubZero) {
    Base* zero = new Op(0);
    Base* ten = new Op(10);
    Base* test = new Sub(zero, ten);
    EXPECT_EQ(test->evaluate(), -10);
}

#endif
