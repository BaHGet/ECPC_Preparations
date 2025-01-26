#include <iostream>

using namespace std;

int main()
{
    // initialization intgers x(first number), y(second number), result
    int x, y, result;
    // initialization char op(operator), equal(equal sign)
    char op, equal;
    // getting input
    cin >> x >> op >> y >> equal >> result;
    // if the operator is +
    if (op == '+')
    {
        // if the result is equal to the sum of x and y
        if (x + y == result)
            cout << "yes";
        else
            cout << x + y;
    }
    // if the operator is -
    else if (op == '-')
    {
        // if the result is equal to the difference of x and y
        if (x - y == result)
            cout << "yes";
        else
            cout << x - y;
    }
    // if the operator is *
    else if (op == '*')
    {
        // if the result is equal to the product of x and y
        if (x * y == result)
            cout << "yes";
        else
            cout << x * y;
    }
    // if the operator is /
    else if (op == '/')
    {
        // if the result is equal to the quotient of x and y
        if (x / y == result)
            cout << "yes";
        else
            cout << x / y;
    }
    return 0;
}