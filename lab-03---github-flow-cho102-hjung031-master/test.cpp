#include "c-echo.h"
#include "c-count.h"

#include "gtest/gtest.h"

TEST(EchoTest, HelloWorld) {
    char* test_val[3]; test_val[0] = "./c-echo"; test_val[1] = "hello"; test_val[2] = "world";
    EXPECT_EQ("hello world", echo(3,test_val));
}

TEST(EchoTest, EmptyString) {
    char* test_val[1]; test_val[0] = "./c-echo";
    EXPECT_EQ("", echo(1,test_val));
}

TEST(EchoTest2, IntroToSoftwareConstructionTooling) {
    char* test_val[6]; test_val[0] = "./c-echo"; test_val[1] = "Intro"; test_val[2] = "To"; test_val[3] = "Software"; test_val[4] = "Construction"; test_val[5] = "Tooling";
    EXPECT_EQ("Intro To Software Construction Tooling", echo(6, test_val));
} 

TEST(SquareRootTest, PositiveNos) { 
    EXPECT_EQ(18.0, squareRootTest(324.0));
    EXPECT_EQ(25.4, squareRootTest(645.16));
}

TEST(SqaureRootTest, ZeroAndNegativeNos) {
    ASSERT_EQ(0.0, squareRootTest(0.0));
    ASSERT_EQ(-1, squareRootTest(-22.0));
}

TEST(FactorialTest, HandlesZeroInput) {
    EXPECT_EQ(factorialTest(0), 1);
}

TEST(FactorialTest, HandlesPositiveInput) {
    EXPECT_EQ(factorialTest(1), 1);
    EXPECT_EQ(factorialTest(2), 2);
    EXPECT_EQ(factorialTest(3), 6);
    EXPECT_EQ(factorialTest(8), 40320);
}

TEST(CountTest, HelloWorld) {
    std::string test_str = "hello world";
    EXPECT_EQ(2, count(test_str));
}

TEST(CountTest, EmptyString) {
    std::string test_str = "";
    EXPECT_EQ(0, count(test_str));
}

TEST(CountTest, ManySpaces) {
    std::string test_str = "   this   string has     weird   spacing";
    EXPECT_EQ(5, count(test_str));
}

int main(int argc, char **argv) {
  ::testing::InitGoogleTest(&argc, argv);
  return RUN_ALL_TESTS();
}
