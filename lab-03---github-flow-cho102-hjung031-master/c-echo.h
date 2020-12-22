#include <iostream>
#include <cmath>

std::string echo(int length, char** chars) {
    std::string ret = "";
    for(int i = 1; i < length; i++) {
        ret += chars[i];
        if(i < length - 1) {
            ret += " ";
        }
    }
    return ret;
}

double squareRootTest(const double number){
    double squareRoot;
    if(number > 0){
	squareRoot = sqrt(number);
    }
    else if(number == 0){
	squareRoot = 0;
    }
    else {
	squareRoot = -1;
    }
}

int factorialTest(int n){
    if (n > 1){
	return n * factorialTest(n-1);
    }
    else{
	return 1;
    }
}
