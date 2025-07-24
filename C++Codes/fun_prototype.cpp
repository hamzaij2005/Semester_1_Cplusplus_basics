#include <iostream>
using namespace std;


//Function prototyping
//This allows us to declare functions before defining them
//Type_of_function function_name(parameter_type parameter_name);
float add(float c, float d);
float sub(float c, float d);
float mul(float c, float d);
float divide(float c, float d);
int main() {
    float a, b;
    cout<<"Enter 1st value : ";
    cin>>a;
    cout<<"Enter 2nd value : ";
    cin>>b;
    cout<<"Sum of Numbers are : "<<add(a,b)<<endl;
    cout<<"Difference of Numbers are : "<<sub(a,b)<<endl;
    cout<<"Product of Numbers are : "<<mul(a,b)<<endl;
    cout<<"Division of Numbers are : "<<divide(a,b)<<endl;
    return 0;
}
float add(float c, float d) {
    float sum = c + d;
    return sum;
}
float sub(float c, float d) {
    float diff = c - d;
    return diff;

}
float mul(float c, float d) {
    float product = c * d;
    return product;
}
float divide(float c, float d) {
    if (d != 0) {
        return c / d;
    } else {
        cout << "Division by zero is not allowed." << endl;
        return 0; // Return 0 or handle error as needed
    }
}