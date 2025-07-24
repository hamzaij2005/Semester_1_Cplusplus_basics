#include <iostream>
using namespace std;

int main()
{
    char a = 'A';      
    char b='B';                             // Use single quotes for character
    cout << "ASCII VALUE OF A: " << int(a) << endl; // Type cast to int to get ASCII
    cout << "ASCII VALUE OF B: " << int(b) << endl; // Type cast to int to get ASCII
    cout << "CHARACTER OF 65: " << char(65) << endl; // Type cast to char to get character from ASCII value
    cout << "CHARACTER OF 66: " << char(66) << endl;
    return 0;
}
