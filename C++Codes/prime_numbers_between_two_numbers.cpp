//This is a C++ program used to identify which number is prime in the given range of numbers.
#include <iostream>
using namespace std;
int main(){
	
	//Take the first and last number of the range as an input from the user.
	int num1, num2;
    cout << "Enter first number : ";
    cin >> num1;
    cout << "Enter last number : ";
    //enter last number for proceeding
    cin >> num2;

    cout << endl;
    //Now we check whether the given numbers in correct order.	
    if (num1 > num2) {
        cout << "number invalid \n first number(num1) must be greater than last number(num2)" << endl;
        return 1; // Exit with an error code if the first number is greater then the last digit.
    }
    
    //If the numbers are in correct manner then the else statement will be executed.
	else {
		int n=num1;
    	do{
    		
	    	if(n>=num1||n<=num2){
	    		//Here we apply the condition for prime numbers.
		    	if((n%2==0 || n%3==0 || n%5==0 || n%7==0 ) && (n!=2 && n!=3 && n!=5 && n!=7 ))
		    	{
			}
    			else{
    				if (n!=1){
					
				cout <<n;
				cout <<endl;
		    	}
				}
		    }

		//After every execution number is increased by 1 so that we can check each and every number.
		n++;
		}

		//If number is not greater then the range then the loop will be repeated.
		while(n>=num1 && n<=num2);
	}
	return 0;
}

