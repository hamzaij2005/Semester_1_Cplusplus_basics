//checking the collatz sequence
#include <iostream>
using namespace std;

int main(){
	//Variable declaration
	int num1, Total_Steps=0;
	bool Continue=1;
	
	
	//Main game loop, it ends if the user declares the ContinueGame bool as false
	do{
		//user input
		cout << "Enter a number: ";
		cin >> num1;
		cout<<"Collatz sequence :";
		
		//Collatz Sequence logic
		while (num1 != 1){
			if (num1 % 2 == 0){
				num1 /= 2;
			}
			else{
				num1 *= 3;
				num1++;
			}
			//Output number after each step and increment step counter
			Total_Steps += 1;
			cout << num1<<" -> ";
		}
		
		
		cout << "Done in " << Total_Steps << " steps." << endl;
		//Asking whether to continue
		cout << "Enter 0 to quit, 1 to continue." << endl;
		cin >> Continue;
	}
	//for continue it is used to take another num from user
	while(Continue);
}
/*The rules are:
1)Start with any positive integer n.

If n is even, divide it by 2.
If n is odd, multiply it by 3 and add 1.
Repeat until n becomes 1.
*/