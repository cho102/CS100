#include <iostream>
#include "Add.hpp"


Add::Add(double x, double y)
{
        sol_num  = x + y;
        sol_string = to_string(x) + " + " + to_string(y);
}

double Add::evaluate()
{
        return sol_num;
}

string Add::stringify()
{
        return sol_string;
}

