#include <iostream>
using namespace std;
int main()
{
    int age;
    cout << "Enter age : ";
    cin >> age;
    int test;
    if (age >= 18)
    {
        cout << "Test pass enter 1 or any other number : ";
        cin >> test;
        if (test == 1)
        {
            cout << "Eligible for licence" << endl;
        }
        else
        {
            cout << "Not eligible for license" << endl;
            cout << "Again give the test" << endl;
        }
    }
    else
    {
        cout << "YOUR AGE IS NOT REACHED AT THE AGE OF DRIVING" << endl;
    }
    return 0;
}