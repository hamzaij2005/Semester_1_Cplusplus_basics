#include <iostream>
using namespace std;
int main()
{
    int a, i = 2;
    cout << "Enter number : ";
    cin >> a;
    cout << "Checking number is a prime number or not" << endl;

    while (i < (a - 1))
    {
        if (a % i == 0)
        {
            cout << a << " is a non prime number " << endl;
            return 0;
        }
        else
        {
            i += 1;
        }
    }
    cout << a << " is a prime number" << endl;
    return 0;
}