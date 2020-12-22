#ifndef __VECTOR_CONTAINER_HPP__
#define __VECTOR_CONTAINER_HPP__

#include <iostream>
#include <vector>
#include "container.hpp"
#include "base.hpp"
#include "sort.hpp"
using namespace std;

class Sort;
class Base;

class VectorContainer : public Container {
	public:
		void add_element(Base* element);
		void print();
		void sort();
		void swap(int i, int j);
		Base* at(int i);
		int size();

	private:
		vector<Base*> vec;
};

#endif
