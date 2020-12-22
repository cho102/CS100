#ifndef __FACTORY_TEST_HPP__
#define __FACTORY_TEST_HPP__

#include "gtest/gtest.h"
#include "Factory.hpp"
#include "ArithmeticOps.hpp"
#include "op.hpp"

TEST(FactoryTest, AddTwoNum) {
	char* test[4]; test[0] = "./test"; test[1] = "2"; test[2] = "+"; test[3] = "2";
	Factory* calculator = new Factory();
	EXPECT_EQ(calculator->parse(test, 4)->evaluate(), 4);
}

TEST(FactoryTest, MultNum) {
	char* test[6]; test[0] = "./test"; test[1] = "2"; test[2] = "+"; test[3] = "2"; test[4] = "*"; test[5] = "3";
        Factory* calculator = new Factory();
        EXPECT_EQ( calculator->parse(test, 6)->evaluate(), 12);
}

TEST(FactoryTest, DoubleDigits) {
        char* test[4]; test[0] = "./test"; test[1] = "12"; test[2] = "-"; test[3] = "92";
        Factory* calculator = new Factory();
        EXPECT_EQ(calculator->parse(test, 4)->evaluate(), -80);
}

TEST(FactoryTest, ErrorInput) {
        char* test[6]; test[0] = "./test"; test[1] = "("; test[2] = "3"; test[3] = "/"; test[4] = "4"; test[5] = ")";
        Factory* calculator = new Factory();
        EXPECT_EQ( calculator->parse(test, 6), nullptr);
}

TEST(FactoryTest, NonDigits) {
        char* test[4]; test[0] = "./test"; test[1] = "a"; test[2] = "+"; test[3] = "2";
        Factory* calculator = new Factory();
        EXPECT_EQ(calculator->parse(test, 4), nullptr);
}

TEST(FactoryTest, UnfinishedInput) {
        char* test[7]; test[0] = "./test"; test[1] = "2"; test[2] = "+"; test[3] = "2"; test[4] = "*"; test[5] = "3"; test[6] = "-";
        Factory* calculator = new Factory();
        EXPECT_EQ( calculator->parse(test, 7), nullptr);
}

TEST(FactoryTest, AllOps) {
        char* test[10]; test[0] = "./test"; test[1] = "1"; test[2] = "+"; test[3] = "2"; test[4] = "*"; test[5] = "3"; test[6] = "-";test[7] = "4"; test[8] = "/"; test[9] = "5";
        Factory* calculator = new Factory();
        EXPECT_EQ(calculator->parse(test, 10)->evaluate(), 1);
}


TEST(FactoryTest, PowTwoNum) {
        char* test[4]; test[0] = "./test"; test[1] = "2"; test[2] = "**"; test[3] = "3";
        Factory* calculator = new Factory();
        EXPECT_EQ(calculator->parse(test, 4)->evaluate(), 8);
}

TEST(FactoryTest, DivTwoNum) {
        char* test[4]; test[0] = "./test"; test[1] = "6"; test[2] = "/"; test[3] = "2";
        Factory* calculator = new Factory();
        EXPECT_EQ(calculator->parse(test, 4)->evaluate(), 3);
}

TEST(FactoryTest, SubTwoNum) {
        char* test[4]; test[0] = "./test"; test[1] = "2"; test[2] = "-"; test[3] = "2";
        Factory* calculator = new Factory();
        EXPECT_EQ(calculator->parse(test, 4)->evaluate(), 0);
}

TEST(FactoryTest, MultTwoNum) {
        char* test[4]; test[0] = "./test"; test[1] = "9"; test[2] = "*"; test[3] = "2";
        Factory* calculator = new Factory();
        EXPECT_EQ(calculator->parse(test, 4)->evaluate(), 18);
}


#endif //__FACTORY_TEST_HPP__
