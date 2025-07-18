#include <iostream>
using namespace std;
int main() {
    int a ;
    cout<<" Wanna write table of which number ? ";
    cin>>a;
    cout<<endl<<endl;
    cout<<"Wanna write table till : ";
    int n;
    cin>>n;
    cout<<endl<<endl<<endl;
    cout<<"Table of "<<a<<" till "<<n<<endl;
    for(int i=1; i<=n; i++)
    {
        cout<<a<<" * "<<i<<" = "<<a*i<<endl;
    }
    return 0;
}