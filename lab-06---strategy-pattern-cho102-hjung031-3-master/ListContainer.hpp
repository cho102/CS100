#ifndef __LISTCONTAINER_HPP__
#define __LISTCONTAINER_HPP__

#include "container.hpp"
#include "base.hpp"
#include <list>
#include <iostream>

class ListContainer : public Container {
    private:
        std::list<Base*> expressionTree;
    public:
        ListContainer() { };
	ListContainer(Sort* function) { };
        void add_element(Base* element) { expressionTree.push_back(element); };
        void print() {
	    for (auto it: expressionTree) {
		std::cout << it->stringify() << std::endl;
	    }
	}
        void sort() {
	    if(sort_function != nullptr) {
		try {
		    if(sort_function == nullptr){
			throw 0;
		    }
		}
		catch(int x){
		    std::cout << "Error: sort_function has not been previously set." << std::endl;
		    exit(EXIT_FAILURE);
		}
		sort_function->sort(this);
	    }
	}
        void swap(int i, int j){
	    auto it1 = expressionTree.begin();
	    while(i > 0){
		it1++;
		i--;
	    }
	    auto it2 = expressionTree.begin();
	    while(j > 0){
		it2++;
		j--;
	    }
	    Base* b1 = *it1;
	    Base* b2 = *it2;

	    *it1 = b2;
	    *it2 = b1;
	}
        Base* at(int i){
	    auto it = expressionTree.begin();
	    while(i > 0){
		it ++;
		i--;
	    }
	    return *it;
	}
        int size() { return expressionTree.size(); }
};

#endif

