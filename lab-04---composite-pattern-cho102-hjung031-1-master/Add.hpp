#ifndef __ADD_HPP__
#define __ADD_HPP__

#include "base.hpp"

class Add: public Base {
        public:
                Add(double, double);
                double evaluate();
                string stringify();

        private:
                string sol_string;
                double sol_num;
};

#endif
