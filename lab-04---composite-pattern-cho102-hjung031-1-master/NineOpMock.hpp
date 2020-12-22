#ifndef __NINE_OP_MOCK_HPP__
#define __NINE_OP_MOCK_HPP__ 

#include "base.hpp"

class NineOpMock: public Base {
        public: 
                NineOpMock() { };

                virtual double evaluate() { return 9.9; }
                virtual string stringify() { return "9.9"; }
}

#endif
