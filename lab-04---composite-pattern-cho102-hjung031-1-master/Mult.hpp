#ifndef __MULT___
#define __MULT__

#include "base.cpp"

class Mult: public Base {
	public:
		Mult(double, double);
		double evaluate();
		string stringify();

	private:
		string sol_string;
		double sol_num;
};

#endif
