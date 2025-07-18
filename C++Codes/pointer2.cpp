#include<iostream>
using namespace std;
int main() {
    int a = 4;
    int *b = &a;
    // Showing the value of a and its address
    // cout << "The value of a is: " << a << endl;
    // cout << "The address of a is: " << &a << endl;
    // Program ends here
    //Next pointer sample

    //& AMPERSAND IS USED TO GET THE ADDRESS OF A VARIABLE
    // * POINTER IS A VARIABLE THAT HOLDS THE ADDRESS OF ANOTHER VARIABLE
    //Also known as dereferencing variable
    cout<< "The value of a is: " << a << endl;
    cout << "The address of a is: " << b << endl;//*pointer used above to store address
    cout << "The value b is storing: " << *b << endl; //*now again pointer usage means derefercing variable
    cout << "The address of b is: " << &b << endl; //address of pointer variable
    //program ends here
    return 0;
}