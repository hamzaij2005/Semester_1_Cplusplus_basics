
// This program takes a character input from the user and displays its ASCII value.
// The ASCII value is obtained by converting the character to an integer using the int() function
#include<iostream>
using namespace std;

int main() {
    char ch;
    cout << "Enter a character: ";
    cin >> ch;
    cout << "ASCII value: " << int(ch);
    return 0;
}
