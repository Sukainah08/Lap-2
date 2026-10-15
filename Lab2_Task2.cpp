#include <iostream>
using namespace std;

// Lab 2 - Task 2: simple calculator (if / else if)
int main()
{
    int number1, number2;
    char op;
    cout << "Enter the first number: ";
    cin >> number1;
    cout << "Enter the second number: ";
    cin >> number2;
    cout << "Enter operation ( +, -, *, / ): ";
    cin >> op;

    if (op == '+')
        cout << "The result = " << number1 + number2 << endl;
    else if (op == '-')
        cout << "The result = " << number1 - number2 << endl;
    else if (op == '*')
        cout << "The result = " << number1 * number2 << endl;
    else if (op == '/')
    {
        if (number2 == 0)
            cout << "Undefined operation, the denominator must be different of zero" << endl;
        else
            cout << "The result = " << number1 / number2 << endl;
    }
    else
        cout << "Entered wrong input!" << endl;

    return 0;
}
