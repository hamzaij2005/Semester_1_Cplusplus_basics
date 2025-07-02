#include<iostream>
using namespace std;
int main(){
    int a,b;
    cout<<"Enter first number (a): ";
    cin>>a;
    cout<<"Enter second number (b): ";
    cin>>b;
    a = a + b; // Step 1: Add both numbers
    b = a - b; // Step 2: Subtract the new value of '
    a = a - b; // Step 3: Subtract the new value of 'b' from 'a'
    cout<<"After swapping: a = "<<a<<", b = "<<b<<endl; // Display swapped values
    // The values of a and b are now swapped without using a third variable
    return 0;

}