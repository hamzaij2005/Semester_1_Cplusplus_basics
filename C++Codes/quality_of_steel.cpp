#include<iostream>

using namespace std;
int main()
{
    double hard,carbon,tensile,a;
do{
           // Getting value from the user
    cout<<"Enter the hardness of steel : ";
    cin>>hard;

    cout<<"Enter the carbon content in steel : ";
    cin>>carbon;

    cout<<"Enter the tensile strength of steel : ";
    cin>>tensile;
    
          // using if else statement for setting conditions

    if(hard>50 && carbon<0.7 && tensile > 5600)
    {
        cout<<"The quality of steel has a grade 10 :"<<endl<<endl;
    }
    else if(hard>50 && carbon<0.7 && tensile<5600)
    {
        cout<<"The quality of steel has a grade of 9 :"<<endl<<endl;
    }
     else if(hard<=50 && carbon<0.7 && tensile>5600)
    {
        cout<<"The quality of steel has a grade of 8 :"<<endl<<endl;
    }
     else if(hard>50 && carbon>=0.7 && tensile>5600)
    {
        cout<<"The quality of steel has a grade of 7 :"<<endl<<endl;
    }
     else if(hard>50 || carbon<0.7 || tensile>5600)
    {
        cout<<"The quality of steel has a grade of 6 :"<<endl<<endl;
    }
    else{
        cout<<"The quality of steel is 5"<<endl<<endl;
    }
    cout<<"Do you want to check again? (1 for Yes, any other number for No): ";
}
while(a==1);    // used do while to perform the function again and again

   

    return 0;
}