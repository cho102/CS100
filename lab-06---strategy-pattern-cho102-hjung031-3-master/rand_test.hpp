#ifndef __RAND_TEST_HPP__
#define __RAND_TEST_HPP__

#include "gtest/gtest.h"

#include "rand.hpp"

TEST(RandTest, RandEvaluate){
    Rand* test = new Rand();
    EXPECT_EQ(test->evaluate(), 83);
}

TEST(RandTest, RandStringify){
    Rand* test = new Rand();
    EXPECT_EQ(test->stringify(), "83.000000");
}

#endif
