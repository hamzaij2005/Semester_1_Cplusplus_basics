#include <iostream>
using namespace std;

int main() {
    int a;
    cout << "Enter number till writing prime number: ";
    cin >> a;

    cout << "Prime numbers from 2 to " << a << " are:" << endl;

    for (int count = 2; count <= a; count++) {
        int b = 0; 

        for (int i = 2; i * i <= count; i++) {
            if (count % i == 0) {
                b = 1; 
                break;
            }
        }

        if (b == 0) {
            cout << count << "  ,  ";
        }
    }

    cout << endl;
    return 0;
}
