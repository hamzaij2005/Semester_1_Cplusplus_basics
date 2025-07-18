#include <iostream>
using namespace std;

int main() {
    int a = 4;
    int *b = &a;
    
    // //& AMPERSAND IS USED TO GET THE ADDRESS OF A VARIABLE
    // // * POINTER IS A VARIABLE THAT HOLDS THE ADDRESS OF ANOTHER VARIABLE
    // //Also known as dereferencing variable
    // cout<< "The value of a is: " << a << endl;
    // cout << "The address of a is: " << b << endl;//*pointer used above to store address
    // cout << "The value b is storing: " << *b << endl; //*now again pointer usage means derefercing variable
    // cout << "The address of b is: " << &b << endl; //address of pointer variable
    // //program ends here
    //pointer to pointer
    //to store addrress of pointer variable than this would be done write below

    cout<< "The value of a is: " << a << endl;
    cout << "The address of a is: " << b << endl;//*pointer used above to store address
    cout << "The value b is storing: " << *b << endl; //*now again pointer usage means derefercing variable
    cout << "The address of b is as b is pointer : " << &b << endl; //address of pointer variable
    cout<<endl<<endl;
    int **c = &b; //pointer to pointer
    cout << "The address of b (pointer )is: " << c << endl; //address of pointer variable b
    cout<<"The value of b is : " << *c << endl; //dereferencing pointer to pointer
    cout<<"The value of a or value b is storing  is : " << **c << endl; //dereferencing pointer to pointer to get value of a
    cout << "The address of c is: " << &c << endl;


     return 0;
}