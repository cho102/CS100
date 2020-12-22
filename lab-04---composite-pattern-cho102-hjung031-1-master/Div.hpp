#ifndef __DIV_HPP__
#define __DIV_HPP__

#include "base.hpp"

class Div: public Base {
        public:
                Div(double, double);
                double evaluate();
                string stringify();

        private:
                string sol_string;
                double sol_num;
};

#endif
