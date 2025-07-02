// check the number is a palindrome or not
#include <iostream>
using namespace std;
int main()
{
    int number, original_Num, reversed_Num, digit;
    bool Continue{1};

    do
    {
        cout << "Enter a number to check if it is a palindrome or not: " << endl;


        // orginal_no given by the user
        cin >> number;
        original_Num = number;
        reversed_Num = 0;
        // reverse number will be achieve by reciprocating orginal number
        while (number > 0)
        {
            digit = number % 10;
            reversed_Num = reversed_Num * 10 + digit;
            number /= 10;
        }

        if (original_Num == reversed_Num)
        {
            cout << original_Num << " is a palindrome ." << endl;
        }
        else
        {
            cout << original_Num << " is not a palindrome." << endl;
        }
        cout << "Enter 0 to quit, 1 to continue." << endl;
        cin >> Continue;

    } while (Continue);
    return 0;
}