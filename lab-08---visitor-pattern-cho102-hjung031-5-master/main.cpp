#include <iostream>

#include "base.hpp"
#include "container.hpp"
#include "visitor.hpp"
#include "iterator.hpp"
#include "op.hpp"
#include "pow.hpp"
#include "ArithmeticOps.hpp"
#include "preorder_iterator.cpp"

using namespace std;

int main() {
	Base* num1 = new Op(1);
	Base* num2 = new Op(2);
	Base* num3 = new Op(3);
	Base* num4 = new Op(4);
	Base* num5 = new Op(5);
	Base* num6 = new Op(6);
	Base* num7 = new Op(7);
	Base* temp1 = new Add(num1, num2);
	Base* temp2 = new Mult(temp1, num3);
	Base* temp3 = new Pow(temp2, num4);
	Base* temp4 = new Sub(temp3, num5);
	Base* temp5 = new Mult(temp4, num6);
	Base* temp6 = new Div (temp5, num7);
	Base* dummy = new Mult(temp6, num1);

	Iterator* it = new PreorderIterator(dummy);
	CountVisitor* visit = new CountVisitor();

	it->first();
	while(!it->is_done()){
		Base* phase = it->current();
		phase->accept(visit);
		it->next();
	}

	cout << "Op count is " << visit->op_count() << endl;
	cout << "Mult count is " << visit->mult_count() << endl;
	cout << "Add count is " << visit->add_count() << endl;
	cout << "Sub count is " << visit->sub_count() << endl;
	cout << "Div count is " << visit->div_count() << endl;
	cout << "Pow count is " << visit->pow_count() << endl;
	

return 0;
}
