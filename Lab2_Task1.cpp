#include <iostream>
using namespace std;

// Lab 2 - Task 1: maximum of three numbers
int main()
{
    int a, b, c, max;
    cout << "Enter three numbers: ";
    cin >> a >> b >> c;
    max = a;
    if (b > max) max = b;
    if (c > max) max = c;
    cout << "Max is: " << max << endl;

    return 0;
}
