#ifndef __ARITHMETIC_OPS_HPP__
#define __ARITHMETIC_OPS_HPP__

#include "base.hpp"
#include "iterator.hpp"
#include "binary_iterator.cpp"
#include "visitor.hpp"

class Mult : public Base {
        public:
                Mult(Base* x, Base* y) : Base () {a=x; b=y; sol_num  = x->evaluate() * y->evaluate(); sol_string = std::to_string(x->evaluate()) + " * " + std::to_string(y->evaluate());}
                virtual double evaluate() {return sol_num;}
                virtual std::string stringify() {return sol_string;}
		virtual Iterator* create_iterator() {return new BinaryIterator(this);}
		virtual Base* get_left() {return a;}
		virtual Base* get_right() {return b;}
		void accept(CountVisitor* visitor) {visitor->visit_mult();}

        private:
		Base* a;
		Base* b;
                std::string sol_string;
                double sol_num;
};

class Div : public Base {
        public:
                Div(Base* x, Base* y) : Base () {a=x; b=y;  sol_num  = x->evaluate() / y->evaluate(); sol_string = std::to_string(x->evaluate()) + " / " + std::to_string(y->evaluate());}
                virtual double evaluate() {return sol_num;}
                virtual std::string stringify() {return sol_string;}
		virtual Iterator* create_iterator() {return new BinaryIterator(this);}
                virtual Base* get_left() {return a;}
                virtual Base* get_right() {return b;}
                void accept(CountVisitor* visitor) {visitor->visit_div();}

        private:
		Base* a;
		Base* b;
                std::string sol_string;
                double sol_num;
};

class Add : public Base {
        public:
                Add(Base* x, Base* y) : Base() {a=x; b=y; sol_num = x->evaluate() + y->evaluate(); sol_string = std::to_string(x->evaluate()) + " + " + std::to_string(y->evaluate());}
                virtual double evaluate() {return sol_num;}
                virtual std::string stringify() {return sol_string;}
		virtual Iterator* create_iterator() {return new BinaryIterator(this);}
                virtual Base* get_left() {return a;}
                virtual Base* get_right() {return b;}
                void accept(CountVisitor* visitor) {visitor->visit_add();}

        private:
		Base* a;
		Base* b;
                double sol_num;
                std::string sol_string;
};

class Sub : public Base {
        public:
                Sub(Base* x, Base* y) : Base() {a=x; b=y;  sol_num = x->evaluate() - y->evaluate() ; sol_string = std::to_string(x->evaluate()) + " - " + std::to_string(y->evaluate());}
                virtual double evaluate() {return sol_num;}
                virtual std::string stringify() {return sol_string;}
		virtual Iterator* create_iterator() {return new BinaryIterator(this);}
                virtual Base* get_left() {return a;}
                virtual Base* get_right() {return b;}
                void accept(CountVisitor* visitor) {visitor->visit_sub();}

        private:
		Base* a;
		Base* b;
                double sol_num;
                std::string sol_string;
};


#endif
