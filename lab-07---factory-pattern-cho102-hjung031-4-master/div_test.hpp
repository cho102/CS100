#ifndef __DIV_TEST_HPP__
#define __DIV_TEST_HPP__

#include "ArithmeticOps.hpp"

#include "gtest/gtest.h"

#include "op.hpp"

TEST(DivTest, DivTwoNeg) {
    Base* neg1 = new Op(-2);
    Base* neg2 = new Op(-8);
    Base* test = new Div(neg1, neg2);
    EXPECT_EQ(test->evaluate(), 0.25);
}

TEST(DivTest, DivPosNeg) {
    Base* pos = new Op(5);
    Base* neg = new Op(-10);
    Base* test = new Div(pos, neg);
    EXPECT_EQ(test->evaluate(), -0.5);
}

TEST(DivTest, DivTwoPos) {
    Base* pos1 = new Op(16);
    Base* pos2 = new Op(4);
    Base* test = new Div(pos1, pos2);
    EXPECT_EQ(test->evaluate(), 4);
}

TEST(DivTest, DivDecimal) {
    Base* dec = new Op(0.5);
    Base* num = new Op(12);
    Base* test= new Div(num, dec);
    EXPECT_EQ(test->evaluate(), 24);
}

TEST(DivTest, DivZero) {
    Base* zero = new Op(0);
    Base* ten = new Op(10);
    Base* test = new Div(zero, ten);
    EXPECT_EQ(test->evaluate(), 0);
}

#endif
