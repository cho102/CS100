#ifndef __POW_HPP__
#define __POW_HPP__

#include <iostream>
#include <cmath>
#include "base.hpp"

class Pow : public Base{
    private: 
	double sol_num;
	std::string sol_string;
    public:
	Pow(Base* num1, Base* num2) : Base()  {sol_num = pow(num1->evaluate(),num2->evaluate()); sol_string = std::to_string(num1->evaluate()) + " ** " + std::to_string(num2->evaluate()); }
	double evaluate(){ return sol_num;}
	std::string stringify(){return sol_string;}
};


#endif
