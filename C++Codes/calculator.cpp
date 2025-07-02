#include<iostream>

using namespace std;

int main(){
	
	int num1,num2;
	cout<<"Select number 1 :";
	
	cin>>num1;
	cout<<"Select number 2 :";
	cin>>num2;
	
	int op;
	cout<<"Enter operator :";
	cout<<"1 for addition\n2 for substraction\n3 for multiplication\n4 for division\n";
    cout<<"Enter your choice :";
	cin>>op;
	if(num2==0 && op==4){
        cout<<"Division by zero is not allowed"<<endl;
        return 0;
    }
	switch(op){
		case 1:
			cout<<"by adding \nnum1+num2= "<<num1+num2;
		break;
		case 2:
		cout<<"by substraction\nnum1-num2= "	<<num1-num2;
			break;
		case 3:
		cout<<"by multiplication\nnum1*num2= "<<num1*num2;
		break;
		case 4:
		cout<<"by division\nnum1/num2= "<<num1/num2;
		break;
		default:
			cout<<"wrong output"<<endl;
		break;
		return 0;
	}
	
	return 0;
}
