#include<iostream>
using namespace std;

int main() {
    int num;
    cout << "Enter a number: ";
    cin >> num;
    if (num >= 0)
        cout << "Positive";
    else
        cout << "Negative";
    return 0;
}
