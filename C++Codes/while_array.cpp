#include <iostream>
using namespace std;

int main() {
    int size;
    cout << "Enter the size of the array: ";    
    cin >> size;
    if (size <= 0) {
        cout << "Size must be a positive integer." << endl;
        return 1;

    }
    
    int arr[size] = {};
    for(int i=0; i < size; i++) {
        cout << "Enter value for element " << i + 1 << ": ";
        cin >> arr[i];
    }
    int i=1;
    while(i-1!=size) {
        cout<<"Marks of "<<i<<" student is "<<arr[i-1]<<endl;
        i++;
}
    return 0;
}