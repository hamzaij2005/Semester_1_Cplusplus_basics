#include <iostream>
using namespace std;

int main() {
    int arr[4]={1,2,3,4};
    int originalSize = sizeof(arr)/ sizeof(arr[0]);
    cout << "Original size of array: " << originalSize << endl;
    return 0;
}