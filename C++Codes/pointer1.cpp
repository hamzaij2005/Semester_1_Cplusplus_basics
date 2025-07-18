#include <iostream>
using namespace std;

int main()
{
    int a = 4;
    int *b = &a;
    // Showing the value of a and its address
    cout << "The value of a is: " << a << endl;
    cout << "The address of a is: " << &a << endl;
    // Program ends here
    return 0;
}