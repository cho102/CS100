#ifndef __SUB_HPP__
#define __SUB_HPP__

#include "base.hpp"

class Sub: public Base{
        public:
                Sub(double, double);
                double evaluate();
                string stringify();

        private:
                string sol_string;
                double sol_num;
};

#endif
