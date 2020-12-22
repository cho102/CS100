#ifndef __POW_HPP__
#define __POW_HPP__

#include <iostream>
#include <cmath>
#include "base.hpp"

class Pow : public Base{
    private: 
	Base* a;
	Base* b;
	double sol_num;
	std::string sol_string;
    public:
	Pow(Base* num1, Base* num2) : Base()  {a=num1; b=num2; sol_num = pow(num1->evaluate(),num2->evaluate()); sol_string = std::to_string(num1->evaluate()) + " ** " + std::to_string(num2->evaluate()); }
	virtual double evaluate(){ return sol_num;}
	virtual std::string stringify(){return sol_string;}
	virtual Iterator* create_iterator() {return new BinaryIterator(this);}
        virtual Base* get_left() {return a;}
        virtual Base* get_right() {return b;}
        void accept(CountVisitor* visitor) {visitor->visit_pow();}
};


#endif
