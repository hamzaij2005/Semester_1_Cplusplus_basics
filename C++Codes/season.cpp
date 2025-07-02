#include<iostream>

using namespace std;
int main()
{
    int month,date,a;

    do{
            // Getting month and date from the user
   cout<<"Enter the month from (1-12): ";
   cin>>month;

   cout<<"Enter the date to check seasons :  ";
   cin>>date;
                // Applying If else statement to fullfill the conditions 

   if((month==12 && date>=16 && date<=31) || (month==1 && date>=1 && date<=31) || (month==2 && date>=1 && date<=28) || (month==3 && date>=1 && date<=15))
   {
    cout<<"Its a Winter season."<<endl;

   }
   else if((month==3 && date>=16 && date<=31) || (month==4 && date>=1 && date<=30) || (month==5 && date>=1 && date<=31) ||  (month==6 && date>=1 && date<=15) )
   {
    cout<<"Its a Spring season."<<endl;
   }
    else if((month==6 && date>=16 && date<=30) || (month==7 && date>=1 && date<=31) || (month==8 && date>=1 && date<=31) ||  (month==9 && date>=1 && date<=15) )
   {
    cout<<"Its a Summer season."<<endl;
   }
    else if((month==10 && date>=16 && date<=31) || (month==11 && date>=1 && date<=30) ||  (month==12 && date>=1 && date<=15) )
   {
    cout<<"Its a Fall season."<<endl;
   }
   else{
    cout<<"You are from another Universe"<<endl;
   }
    cout<<"Do you want to check again? (1 for Yes, any other number  for No): ";
    cin>>a;
    }
    while(a==1);    // used do while to perform the function again and again


  

    return 0;
}