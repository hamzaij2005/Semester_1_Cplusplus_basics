#include<iostream>
using namespace std;
int main(){

    int students;
    cout<<"Number of students : ";
    cin>>students;
    if (students <= 0) {
        cout << "Number of students must be a positive integer." << endl;
        return 1;
    }
    float arr[students]={};
    int i = 0;
    do{
        cout<<"Enter value of student "<<i+1<<" : ";
        cin>>arr[i];
        i++;
    }
    while(i < students);
    return 0;
}