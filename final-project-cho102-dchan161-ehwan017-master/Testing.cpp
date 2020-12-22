#include "gtest/gtest.h"

#include "FactoryTests.hpp"
#include "compositeTest.hpp"
#include "strategyTests.hpp"

int main(int argc, char **argv) {
  ::testing::InitGoogleTest(&argc, argv);
  return RUN_ALL_TESTS();
}
