#include <iostream>
#include "Factory.hpp"

using namespace std;

int main(int argc, char** argv) {
/*
	for (int i = 0; i < argc; ++i) {
		cout << i << " = " << *argv[i] << endl;
	}	
*/
	Factory* calculator = new Factory();
	if (calculator->parse(argv, argc) == nullptr) {
		cout << "ERROR INPUT!" << endl;
	}
	else {
		cout << calculator->parse(argv, argc)->stringify() << " = " << calculator->parse(argv, argc)->evaluate() << endl;
	}

	return 0;
}
