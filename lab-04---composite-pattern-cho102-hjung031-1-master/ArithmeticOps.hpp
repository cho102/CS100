#ifndef __ARITHMETIC_OPS_HPP__
#define __ARITHMETIC_OPS_HPP__

#include "base.hpp"

class Mult : public Base {
        public:
                Mult(Base* x, Base* y) : Base () { sol_num  = x->evaluate() * y->evaluate(); sol_string = std::to_string(x->evaluate()) + " * " + std::to_string(y->evaluate());}
                virtual double evaluate() { return sol_num;}
                virtual std::string stringify() {return sol_string;}

        private:
                std::string sol_string;
                double sol_num;
};

class Div : public Base {
        public:
                Div(Base* x, Base* y) : Base () { sol_num  = x->evaluate() / y->evaluate(); sol_string = std::to_string(x->evaluate()) + " / " + std::to_string(y->evaluate());}
                virtual double evaluate() { return sol_num;}
                virtual std::string stringify() {return sol_string;}

        private:
                std::string sol_string;
                double sol_num;
};

class Add : public Base {
        public:
                Add(Base* x, Base* y) : Base() { sol_num = x->evaluate() + y->evaluate(); sol_string = std::to_string(x->evaluate()) + " + " + std::to_string(y->evaluate());}
                virtual double evaluate() {return sol_num;}
                virtual std::string stringify() {return sol_string;}

        private:
                double sol_num;
                std::string sol_string;
};

class Sub : public Base {
        public:
                Sub(Base* x, Base* y) : Base() { sol_num = x->evaluate() - y->evaluate() ; sol_string = std::to_string(x->evaluate()) + " - " + std::to_string(y->evaluate());}
                virtual double evaluate() {return sol_num;}
                virtual std::string stringify() {return sol_string;}

        private:
                double sol_num;
                std::string sol_string;
};


#endif
