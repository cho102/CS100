#include <iostream>
#include "Sub.hpp"

Sub::Sub(double x, double y)
{
        sol_num  = x - y;
        sol_string = to_string(x) + " - " + to_string(y);
}

double Sub::evaluate()
{
        return sol_num;
}

string Sub::stringify()
{
	return sol_string;
}
