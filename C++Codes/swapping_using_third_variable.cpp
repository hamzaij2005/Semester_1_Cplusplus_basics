#include <iostream>
using namespace std;
int main()
{
    int a, b, temp;
    cout << "Enter first number (a): ";
    cin >> a;
    cout << "Enter second number (b): ";
    cin >> b;
    temp = a;
    a = b;
    b = temp;
    cout << "a = " << a << ", b = " << b;
    return 0;
}