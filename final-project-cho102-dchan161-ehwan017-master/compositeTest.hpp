#ifndef __COMPOSITE_TEST_HPP__
#define __COMPOSITE_TEST_HPP__

#include "Category.hpp"
#include "UserGuide.hpp"
#include "Task.hpp"
#include "gtest/gtest.h"


TEST(AddTest, AddCategory) {
  Category* test = new Category("test", 1, 2);
  Category* subcat = new Category("subcat", 0, 0);

  test->add(subcat);

  EXPECT_EQ(test->at(0), subcat);
}

TEST(AddTest, AddTask) {
  Category* test = new Category("test", 1, 2);
  Task* task = new Task("task");

  test->add(task);

  EXPECT_EQ(test->at(0), task);
}

TEST(AddTest, AddMultItems) {
    Category *finalStudy = new Category("study", 1, 1);
    Task* english = new Task("english");
    Task* cs = new Task("cs");
    Task* calc = new Task("calc");
    Task* biology = new Task("biology");
    Task* chem = new Task("chem");
    Task* physic = new Task("physics");
    Task* algebra =new Task("algebra");
    Category *math = new Category("math", 1, 2);
    Category *science = new Category("science", 1, 2);
    finalStudy->add(english);
    finalStudy->add(cs);
    finalStudy->add(math);
    math->add(calc);
    math->add(algebra);       
    finalStudy->add(science);
    science->add(biology);
    science->add(chem);
    science->add(physic);

  EXPECT_EQ(finalStudy->at(2), math);
  EXPECT_EQ(math->at(1), algebra);
}

TEST(calculateTimeEachDay, OneCategory) {
  Category* test = new Category("test", 4, 10);
  EXPECT_EQ(test->outputTimer(), 4);
}

TEST(calculateTimeEachDay, MultItems) {
  Category* test = new Category("test", 4, 10);
  Task* task1 = new Task("task1");
  Task* task2 = new Task("task2");
  test->add(task1);
  test->add(task2);

  EXPECT_EQ(task1->outputTimer(), 2);
}

TEST(calculateTimeEachDay, TwoCategories) {
  Category* test = new Category("test", 6, 10);
  Category* test1 = new Category("test1", 0, 0);
  Task* task1 = new Task("task1");
  Task* task2 = new Task("task2");
  test->add(test1);
  test->add(task1);
  test->add(task2);

  EXPECT_EQ(task1->outputTimer(), 2);
  EXPECT_EQ(test1->outputTimer(), 2);
}

TEST(calculateTimeEachDay, OneTaskTwoCategories) {
  Category* test = new Category("test", 6, 10);
  Category* test1 = new Category("test1", 0, 0);
  Task* t1t1 = new Task("t1t1");
  Task* t1t2 = new Task("t1t2");
  Task* task1 = new Task("task1");
  Task* task2 = new Task("task2");
  test->add(test1);
  test->add(task1);
  test->add(task2);
  test1->add(t1t1);
  test1->add(t1t2);

  EXPECT_EQ(task1->outputTimer(), 2);
  EXPECT_EQ(t1t1->outputTimer(), 1);
}


TEST(calculateTimeEachDay, DecNums) {
  Category* test = new Category("test", 5, 2);
  Category* subcat = new Category("subcat", 1, 3);
  Task* task = new Task("task");
  Task* task1 = new Task("task1");
  Task* task2 = new Task("task2");
  Task* task3 = new Task("task3");
  Task* task4 = new Task("task4");
  test->add(subcat);
  test->add(task);
  test->add(task1);
  test->add(task4);
  subcat->add(task2);
  subcat->add(task3);

  EXPECT_EQ(subcat->outputTimer(), 1.25);
  EXPECT_EQ(test->outputTimer(), 5);
}

TEST(checkMaxDays, OneCategory) {
  Category* test = new Category("test", 1, 2);

  EXPECT_EQ(test->getMax(), 2);
}

TEST(checkMaxDays, TwoItems) {
  Category* test = new Category("test", 1, 2);
  Task* task = new Task("task");
  test->add(task);

  EXPECT_EQ(task->getMax(), 2);
  EXPECT_EQ(test->getMax(), 2);
}

TEST(checkMaxDays, TwoCategories) {
  Category* test = new Category("test", 1, 2);
  Category* test1 = new Category("test1", 1, 4);
  Task* task = new Task("task");
  test->add(task);
  test->add(test1);
  
  EXPECT_EQ(test1->getMax(), 2);
  EXPECT_EQ(test->getMax(), 2);
}

TEST(CheckInput, NoItems) {
  Category* test = new Category("test", 1, 2);

  EXPECT_EQ(test->getItems(), 0);
}

TEST(CheckInput, MultItems) {
  Category* test = new Category("test", 1, 2);
  Category* subcat = new Category("subcat", 1, 3);
  Task* task = new Task("task");
  Task* task1 = new Task("task1");
  test->add(subcat);
  test->add(task);
  test->add(task1);

  EXPECT_EQ(subcat->getItems(), 0);
  EXPECT_EQ(test->getItems(), 3);
}

TEST(CheckInpput, TwoCategories) {
  Category* test = new Category("test", 1, 2);
  Category* subcat = new Category("subcat", 1, 3);
  Task* task = new Task("task");
  Task* task1 = new Task("task1");
  Task* task2 = new Task("task2");
  Task* task3 = new Task("task3");
  test->add(subcat);
  test->add(task);
  test->add(task1);
  subcat->add(task2);
  subcat->add(task3);

  EXPECT_EQ(subcat->getItems(), 2);
  EXPECT_EQ(test->getItems(), 3);
}

#endif
