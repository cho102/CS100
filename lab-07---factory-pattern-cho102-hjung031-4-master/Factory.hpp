#ifndef __FACTORY_HPP__
#define __FACTORY_HPP__

#include "ArithmeticOps.hpp"
#include "op.hpp"
#include "pow.hpp"
#include <queue>
#include <sstream>

using namespace std;

class Factory {
	public:
		Factory() {};
		Base* parse(char** input, int length){
			for (int i = 1; i < length; ++i) {
				if (isdigit(*input[i])) {
					int x = atoi(input[i]);
        	                	Op* temp = new Op(x);
                	       		numbers.push(temp);
               		 	}
                		else if (*input[i] == '+') {
                        		if(isdigit(*input[i+1])) {
                        			if (i+1 != length)
                                                {
			                  		operations.push(input[i]);
                                                }
                                                else
                                                {
                                                  return nullptr;
                                                } 
					}
                       			else {
                                		return nullptr;
                        		}
                		}
                		else if (*input[i] == '-') {
                        		if(isdigit(*input[i+1])) {
						if (i+1 != length)
                                                {
					            operations.push(input[i]);
                                                }
                                                else
                                                { 
				                    return nullptr;
                                                } 
					}
                        		else {
                                		return nullptr;
                        		}
                		}
                		else if (*input[i] == '/') {
                        		if(isdigit(*input[i+1])) {
						if (i+1 != length)
                                                {
				                   operations.push(input[i]);
                                                }
                                                else
                                                { 
				                return nullptr;
                                                } 
                        		}
                        		else {
						return nullptr;
                        		}
                		}
                		else if (*input[i] == '*') {
					if(isdigit(*input[i+1])) {
						if (i+1 != length)
                                                {
                                                    operations.push(input[i]);
                                                }
                                                else
                                                { 
				                 return nullptr;
                                                } 
					}
                        		else {
						return nullptr;
                        		}
                		}
               			else {
                        		return nullptr;
                		}
        		}

	
			queue<Base*> output;
       			output.push(numbers.front());
        		numbers.pop();

     			while (!operations.empty()) {
                		Base* num = output.front();
                		output.pop();
                		Base* num2 = numbers.front();
                		numbers.pop();
                		Base* check;

                		if(operations.front() == "+"){
                        		check = new Add(num, num2);
                		}
                		else if(operations.front() == "-"){
                        		check = new Sub(num, num2);
                		}
                		else if(operations.front() == "*"){
                        		check = new Mult(num, num2);
                		}
                		else if(operations.front() == "/"){
                        		check = new Div(num, num2);
                		}
                		else if(operations.front() == "**"){
                        		check = new Pow(num, num2);
                		}
                		output.push(check);
                		operations.pop();
        		}

        		return output.front();
		};

	private:
		queue<Base*> numbers;
		queue<string> operations;
};

#endif //__FACTORY_HPP__

