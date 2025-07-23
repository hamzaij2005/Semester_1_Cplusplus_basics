#include <iostream>
using namespace std;

int main() {
    int students;
    cout << "Number of students: "; 
    cin >> students;
    if (students <= 0) {
        cout << "Number of students must be a positive integer." << endl;
        return 1;
    }
    float arr[students] = {};
    int i = 1;
    while(i-1!=students){
        cout<<"Marks of "<<i<<" student is  : ";
        cin>>arr[i-1];
        i++;
    }
    return 0;
}