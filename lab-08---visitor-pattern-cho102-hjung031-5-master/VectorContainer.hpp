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
		void add_element(Base* element) {vec.push_back(element);}
		void print() {
			for (int i = 0; i < vec.size(); ++i){                        
				cout << vec.at(i)->stringify() << endl;
			}
		}

		void sort() {
			try {
				if (sort_function != nullptr) {
					sort_function->sort(this);
        			}
        			else {
					throw "No sort method selected!";
				}
			}
			catch (const char* msg) {
				cout << msg << endl;
			}		
		}

		void swap(int i, int j){
			Base* temp = vec.at(i);
        		vec.at(i) = vec.at(j);
        		vec.at(j) = temp;
		}
		

		Base* at(int i) {return vec.at(i);}

		int size()  {return vec.size();}

	private:
		vector<Base*> vec;
};

#endif
