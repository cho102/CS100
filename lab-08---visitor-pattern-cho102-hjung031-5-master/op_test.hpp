#ifndef __OP_TEST_HPP__
#define __OP_TEST_HPP__

#include "gtest/gtest.h"

#include "op.hpp"

TEST(OpTest, OpEvaluateNonZero) {
    Op* test = new Op(8.5);
    EXPECT_EQ(test->evaluate(), 8.5);
}

TEST(OpTest, OpStringifyNonZero) {
    Op* test = new Op(8.5);
    EXPECT_EQ(test->stringify(), "8.500000");
}

TEST(OpTest, OpEvaluateZero) {
   Op* test =  new Op(0.0);
   EXPECT_EQ(test->evaluate(), 0.0);
}

TEST(OpTest, OpStringifyZero) {
   Op* test = new Op(0.0);
   EXPECT_EQ(test->stringify(), "0.000000");
}

TEST(OpTest, OpEvaluateNeg) {
   Op* test = new Op(-6.7);
   EXPECT_EQ(test->evaluate(), -6.7);
}

TEST(OpTest, OpStringifyNeg) {
   Op* test = new Op(-6.7);
   EXPECT_EQ(test->stringify(), "-6.700000");
}  

#endif //__OP_TEST_HPP__
