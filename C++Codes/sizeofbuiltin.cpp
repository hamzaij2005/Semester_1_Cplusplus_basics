#include<iostream>
using namespace std;
int main(){
        int num1, num2;
        cout << "Enter first number: ";
        cin >> num1;
        cout << "Enter second number: ";
        cin >> num2; 
        cout << "Size of first number: " << sizeof(num1) << " bytes" << endl;
        cout << "Size of second number: " << sizeof(num2) << " bytes" << endl;
        cout << "Size of int data type: " << sizeof(int) << " bytes" << endl;
        cout << "Size of float data type: " << sizeof(float) << " bytes" << endl;
        cout << "Size of double data type: " << sizeof(double) << " bytes" << endl;
        cout << "Size of char data type: " << sizeof(char) << " bytes" << endl;
        cout << "Size of bool data type: " << sizeof(bool) << " bytes" << endl;
        cout << "Size of long data type: " << sizeof(long) << " bytes" << endl;
        cout << "Size of long long data type: " << sizeof(long long) << " bytes" << endl;
        cout << "Size of short data type: " << sizeof(short) << " bytes" << endl;
    return 0;
}