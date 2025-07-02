#include <iostream>
using namespace std;

int main() {

                            // largest number detector
    int num1, num2, num3,num4,num5;

    cout<<"Enter 1 to check for 3 numbers and any other to check for 4 numbers"<<endl;
    cin>>num5;

    // Applying condition

    // Applying if else statement so that user can check number according to its choice

    // Checking largest number for 3 numbers
    
    if(num5==1){
    cout << "Enter three numbers : ";
    cin >> num1 >> num2 >> num3 ;

    int biggest = (num1 > num2) ? (num1 > num3 ? num1 : num3) : (num2 > num3 ? num2 : num3);

    
    cout << "The largest number is: " << biggest << endl;

    }
           // Checking largest number for 4 numbers
    else{
        cout << "Enter four numbers : ";
    cin >> num1 >> num2 >> num3 >> num4 ;


 int greatest=( (num1>num2) ? (num2>num3) ? (num1>num4 ? num1 : num4) : (num2>num3 ? num2 : num3) : (num3>num4 ? num4 :num3));

    cout<<"The largest number is "<<  greatest << endl;

    }
    return 0;
}
