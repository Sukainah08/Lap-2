#include <iostream>
using namespace std;

// Lab 2 - Task 3: capital / small / digit / special symbol
int main()
{
    char ch;
    cout << "Enter any character: ";
    cin >> ch;
    if (ch >= 'A' && ch <= 'Z')
        cout << ch << " is a capital letter" << endl;
    else if (ch >= 'a' && ch <= 'z')
        cout << ch << " is a small letter" << endl;
    else if (ch >= '0' && ch <= '9')
        cout << ch << " is a digit" << endl;
    else
        cout << ch << " is a special symbol" << endl;

    return 0;
}
