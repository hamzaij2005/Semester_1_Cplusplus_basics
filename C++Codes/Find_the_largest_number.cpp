#include<iostream>
using namespace std;

int main() {
    int a, b, c;
    cout << "Enter num 1: ";
    cin >> a ;
    cout << "Enter num 2: ";
    cin >> b ;
    cout << "Enter num 3: ";
    cin >> c ;
    cout << "You entered: " << a << ", " << b << ", " << c << endl;
    // Finding the largest number
    cout << "Finding the largest number..." << endl;
    // Using if-else statements to find the largest number
    // This is a simple way to compare three numbers
    // It checks each number against the others and prints the largest one
    if (a >= b && a >= c)
        cout << "Largest is: " << a;
    else if (b >= a && b >= c)
        cout << "Largest is: " << b;
    else
        cout << "Largest is: " << c;
    return 0;
}
