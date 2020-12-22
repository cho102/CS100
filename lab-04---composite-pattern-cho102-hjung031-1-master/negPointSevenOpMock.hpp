#ifndef __NEG_POINT_SEVEN_HPP__
#define __NEG_POINT_SEVEN_HPP__ 

#include "base.hpp"

class negSevenOpMock: public Base {
	public: 
		negSevenOpMocj() { };

		virtual double evaluate() { return -0.7; }
		virtual string stringify() { return "-0.7"; }
};

#endif
