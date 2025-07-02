#include <iostream>
using namespace std;
int main()
{
    int a, count = 1, sum = 0;
    cout << "Enter number such that can get sum of natural number till it" << endl;
    cout << "The number is ";
    cin >> a;
    if (a > 0)
    {
        while (count <= a)
        {
            sum += count;
            count += 1;
        }
        cout << "Sum of natural number till " << a << " = " << sum << endl;
    }
    else
    {
        cout << "Number entered is not a natural number" << endl;
    }

    return 0;
}