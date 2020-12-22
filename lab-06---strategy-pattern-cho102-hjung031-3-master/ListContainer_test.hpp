#ifndef __LISTCONTAINER_TEST_HPP__
#define __LISTCONTAINER_TEST_HPP__

#include "op.hpp"
#include "ListContainer.hpp"
#include "BubbleSort.hpp"
#include "gtest/gtest.h"

TEST(ListContainerTestSet, Test1) {
    Op* seven = new Op(7);
    ListContainer* test_container = new ListContainer();

    test_container->add_element(seven);

    ASSERT_EQ(test_container->size(), 1);
    EXPECT_EQ(test_container->at(0)->evaluate(), 7);
}

TEST(ListContainerTestSet, Test2) {
    Op* eight = new Op(8);
    Op* two = new Op(2);

    ListContainer* test_container = new ListContainer();

    test_container->add_element(eight);
    test_container->add_element(two);

    ASSERT_EQ(test_container->size(), 2);
    EXPECT_EQ(test_container->at(1)->evaluate(), 2);
}

TEST(SortTestSet, BubbleSortTest) {
    Op* seven = new Op(7);
    Op* four = new Op(4);
    Mult* TreeA = new Mult(seven, four);

    Op* three = new Op(3);
    Op* two = new Op(2);
    Add* TreeB = new Add(three, two);

    Op* ten = new Op(10);
    Op* six = new Op(6);
    Sub* TreeC = new Sub(ten, six);

    ListContainer* container = new ListContainer();
    container->add_element(TreeA);
    container->add_element(TreeB);
    container->add_element(TreeC);

    ASSERT_EQ(container->size(), 3);
    EXPECT_EQ(container->at(0)->evaluate(), 28);
    EXPECT_EQ(container->at(1)->evaluate(), 5);
    EXPECT_EQ(container->at(2)->evaluate(), 4);

    container->set_sort_function(new BubbleSort());
    container->sort();

    ASSERT_EQ(container->size(), 3);
    EXPECT_EQ(container->at(0)->evaluate(), 4);
    EXPECT_EQ(container->at(1)->evaluate(), 5);
    EXPECT_EQ(container->at(2)->evaluate(), 28);
}

#endif
