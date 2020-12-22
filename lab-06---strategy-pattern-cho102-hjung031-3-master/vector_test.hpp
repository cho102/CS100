#ifndef __VECTOR_TEST__
#define __VECTOR_TEST__
#include "gtest/gtest.h"
#include "VectorContainer.hpp"
#include "ArithmeticOps.hpp"
#include "op.hpp"

TEST(VectorContainerTestSet, SwapTest) {
    // Setup the elements under test
    Op* seven = new Op(7);
    VectorContainer* test_container = new VectorContainer();
    
    // Exercise some functionality of hte test elements
    test_container->add_element(seven);
    
    // Assert that the container has at least a single element
    // otherwise we are likely to cause a segfault when accessing                             
    ASSERT_EQ(test_container->size(), 1);
    EXPECT_EQ(test_container->at(0)->evaluate(), 7);
}

TEST(VectorContainerTestSets, SwapTest) {
	Op* one = new Op(1);
	Op* two = new Op(2);
	VectorContainer* test_container = new VectorContainer();
	
	test_container->add_element(one);
	test_container->add_element(two);

	test_container->swap(0,1);

	ASSERT_EQ(test_container->size(), 2);
	EXPECT_EQ(test_container->at(0)->evaluate(), 2);
}

TEST(VectorContainerTestSets, EvaluateTest) {
	Op* five = new Op(5);
        Op* two = new Op(2);
	Op* three = new Op(3);
	Mult* mult = new Mult(five, two);
	Sub* sub = new Sub(mult, three);
        VectorContainer* test_container = new VectorContainer();
	
        test_container->add_element(mult);
	test_container->add_element(sub);

        ASSERT_EQ(test_container->size(), 2);
        EXPECT_EQ(test_container->at(1)->evaluate(), 7);
}

TEST(VectorContainerTestSets, ThreeItemsEval) {
        Op* five = new Op(5);
        Op* two = new Op(2);
        Op* three = new Op(3);
	Op* four = new Op(4);
        Mult* mult = new Mult(five, two);
        Sub* sub = new Sub(mult, three);
	Add* add = new Add(sub, four);
        VectorContainer* test_container = new VectorContainer();

        test_container->add_element(mult);
        test_container->add_element(sub);
	test_container->add_element(add);

        ASSERT_EQ(test_container->size(), 3);
        EXPECT_EQ(test_container->at(2)->evaluate(), 11);
}

TEST(VectorContainerTestSets, ThreeItemsSwap) {
        Op* five = new Op(5);
        Op* two = new Op(2);
        Op* three = new Op(3);
        Op* four = new Op(4);
        Mult* mult = new Mult(five, two);
        Sub* sub = new Sub(mult, three);
        Add* add = new Add(sub, four);
        VectorContainer* test_container = new VectorContainer();

        test_container->add_element(mult);
        test_container->add_element(sub);
        test_container->add_element(add);
	
	test_container->swap(0, 2);

        ASSERT_EQ(test_container->size(), 3);
        EXPECT_EQ(test_container->at(2)->evaluate(), 10);
	EXPECT_EQ(test_container->at(0)->evaluate(), 11);
}

#endif
