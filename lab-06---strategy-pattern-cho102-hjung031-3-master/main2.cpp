#include <iostream>

#include "base.hpp"
#include "ArithmeticOps.hpp"
#include "op.hpp"
#include "ListContainer.hpp"
#include "VectorContainer.hpp"
#include "BubbleSort.hpp"
#include "SelectionSort.hpp"

int main() {

	Base* three = new Op(3);
	Base* seven = new Op(7);
	Base* four = new Op(4);
	Base* two = new Op(2);
	Base* mult = new Mult(seven, four);
	Base* add = new Add(three, mult);
	Base* minus = new Sub(add, two);

	VectorContainer* container = new VectorContainer();
	container->add_element(mult);
	container->add_element(add);
	container->add_element(minus);

	container->print();
	std::cout << container->at(0)->evaluate() << std::endl;
	container->set_sort_function(new SelectionSort());
	container->sort();
	container->print();

	ListContainer* container2 = new ListContainer();
	container2->add_element(mult);
	container2->add_element(add);
	container2->add_element(minus);

	container2->print();	
	std::cout << container2->at(0)->evaluate() << std::endl;
	container->set_sort_function(new SelectionSort());
	container2->sort();
	container2->print();

 	Base* five = new Op(5);
        Base* negNine = new Op(-9);
        Base* six = new Op(6);
        Base* eight = new Op(8);
        Base* mult1 = new Mult(five, negNine);
        Base* add1 = new Add(six, mult1);
        Base* minus1 = new Sub(add1, eight);

	VectorContainer* container1 = new VectorContainer();
        container1->add_element(mult1);
        container1->add_element(add1);
        container1->add_element(minus1);

        container1->print();
        std::cout << container1->at(0)->evaluate() << std::endl;
        container1->set_sort_function(new BubbleSort());
        container1->sort();
        container1->print();

  	ListContainer* container3 = new ListContainer();
        container3->add_element(mult1);
        container3->add_element(add1);
        container3->add_element(minus1);

        container3->print();
        std::cout << container3->at(0)->evaluate() << std::endl;
        container3->set_sort_function(new BubbleSort());
        container3->sort();
        container3->print();
	


	return 0;
}
