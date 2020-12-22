#include <iostream>
#include "Mult.hpp"

using namespace std;

Mult::Mult(double x, double y)
{
        sol_num  = x * y;
        sol_string = to_string(x) + " * " + to_string(y);
}

double  Mult::evaluate()
{
        return sol_num;
}

string Mult::stringify()
{
        return sol_string;
}

