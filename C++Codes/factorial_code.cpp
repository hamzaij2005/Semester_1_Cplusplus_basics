#include <iostream>
using namespace std;
int main()
{
    int count = 1, i = 1, fact;
    cout << "Checking factorial of ";
    cin >> fact;
    while (i <= fact)
    {
        count = count * i;
        i += 1;
    }
    cout << "Factorial of " << fact << " is " << count << endl;
    return 0;
}