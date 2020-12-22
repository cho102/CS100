#include "gtest/gtest.h"

#include "Rectangle.hpp"


TEST(ConstructorTest, SmallNums) {
	Rectangle test = Rectangle(1,4);
	EXPECT_EQ(test.getWidth(), 1);
}

TEST(ConstructorTest, BigNums) {
	Rectangle test = Rectangle(5000, 2000);
	EXPECT_EQ(test.getHeight(), 2000);
}

TEST(ConstructorTest, DecNums) {
	Rectangle test = Rectangle(1.5, 20.9);
	EXPECT_EQ(test.getHeight(), 20);
}

TEST(AreaTest, SmallNums) {
	Rectangle test = Rectangle(1,2);
	EXPECT_EQ(test.area(), 2);
}

TEST(AreaTest, BigNums) {
        Rectangle test = Rectangle(1000,2000);
        EXPECT_EQ(test.area(), 2000000);
}

TEST(AreaTest, DecNums) {
        Rectangle test = Rectangle(1.6,9.2);
        EXPECT_EQ(test.area(), 9);
}

TEST(PerimeterTest, SmallNums) {
        Rectangle test = Rectangle(1,2);
        EXPECT_EQ(test.perimeter(), 6);
}

TEST(PerimeterTest, BigNums) {
        Rectangle test = Rectangle(1000,2000);
        EXPECT_EQ(test.perimeter(), 6000);
}

TEST(PerimeterTest, DecNums) {
        Rectangle test = Rectangle(1.6,9.2);
        EXPECT_EQ(test.perimeter(), 20);
}


int main(int argc, char **argv) {
	::testing::InitGoogleTest(&argc, argv);
	return RUN_ALL_TESTS();
}
