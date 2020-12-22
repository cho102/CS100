#include <iostream>
#include "Div.hpp"

using namespace std;

Div::Div(double x, double y)
{
        sol_num  = x / y;
        sol_string = to_string(x) + " / " + to_string(y);
}

double Div::evaluate()
{
        return sol_num;
}

string Div::stringify()
{
        return sol_string;
}
