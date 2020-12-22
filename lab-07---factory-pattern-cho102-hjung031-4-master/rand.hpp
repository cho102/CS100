#ifndef __RAND_HPP__
#define __RAND_HPP__

#include "base.hpp"
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

class Rand : public Base {
    private:
	double value;
    public:
	Rand() : Base() { value = rand() % 100; srand(time(NULL)); value = rand() % 100; srand(1); value = rand() % 100; }
	virtual double evaluate() { return value; }
	virtual std::string stringify() { return std::to_string(value); }
};

#endif
