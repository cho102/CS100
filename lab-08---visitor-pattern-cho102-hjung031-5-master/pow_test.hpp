#ifndef __POW_TEST_HPP__
#define __POW_TEST_HPP__

#include "gtest/gtest.h"

#include "pow.hpp"
#include "op.hpp"

TEST(PowTest, PowEvaluateNonZero) {
    Base* pos1 = new Op(2.0);
    Base* pos2 = new Op(3.0);
    Base* test = new Pow(pos1, pos2);
    EXPECT_EQ(test->evaluate(), 8.0);
}

TEST(PowTest, PowStringifyNonZero) {
    Base* pos1 = new Op(2.0);
    Base* pos2 = new Op(3.0);
    Base* test = new Pow(pos1, pos2);
    EXPECT_EQ(test->stringify(), "2.000000 ** 3.000000");
}

TEST(PowTest, PowEvaluateZero) {
    Base* zero = new Op(0.0);
    Base* test = new Pow(zero, zero);
    EXPECT_EQ(test->evaluate(), 1.0);
}

TEST(PowTest, PowStringifyZero) {
    Base* zero = new Op(0.0);
    Base* test = new Pow(zero, zero);
    EXPECT_EQ(test->stringify(), "0.000000 ** 0.000000");
}

TEST(PowTest, PowEvaluateNeg) {
    Base* neg1 = new Op(-3.0);
    Base* neg2 = new Op(2.0);
    Base* test = new Pow(neg1, neg2);
    EXPECT_EQ(test->evaluate(), 9.0);
}

TEST(PowTest, PowStringifyNeg) {
    Base* neg1 = new Op(-3.0);
    Base* neg2 = new Op(2.0);
    Base* test = new Pow(neg1, neg2);
    EXPECT_EQ(test->stringify(), "-3.000000 ** 2.000000");
}

#endif
