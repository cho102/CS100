#ifndef __POINT_SEVEN__
#define __POINT_SEVEN__

#include "base.hpp"

class pointSevenOpMock: public Base {
	public:
		pointSevenOpMock() { };

 	       virtual double evaluate() { return 0.7; }
        	virtual string stringify() { return "0.7"; }
};

#endif
