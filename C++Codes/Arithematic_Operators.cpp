#include<iostream>
using namespace std;
int main(){
    int num1, num2;
    cout << "Enter first number: ";
    cin >> num1;
    cout << "Enter second number: ";
    cin >> num2;
    cout << "Addition: " << num1 + num2 << endl;
    cout << "Subtraction: " << num1 - num2 << endl;
    cout << "Multiplication: " << num1 * num2 << endl;
    cout << "Division: " << num1 / num2 << endl;//issue as it will not give decimal value
    cout << "Modulus: " << num1 % num2 << endl;
    cout << "Increment of first number: " << ++num1 << endl;
    cout << "Decrement of second number: " << --num2 << endl;
    cout << "Increment of second number: " << num2++ << endl;
    cout << "Decrement of first number: " << num1-- << endl;
    cout << "Final value of first number after decrement: " << num1 << endl;
    cout << "Final value of second number after increment: " << num2 << endl;

        return 0;
}