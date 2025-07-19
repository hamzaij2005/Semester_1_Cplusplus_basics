#include<iostream>
using namespace std;
int main(){
	int students;
	cout<<"Number of students : ";
	cin>>students;
	float arr[students]={};
	for (int i=0;i<students;i++){
		cout<<"Enter value of student "<<i+1<<" : ";
		cin>>arr[i];
	}
	cout<<"Data successfully collected :"<<endl;
	cout<<endl;
	for (int i=0;i<students;i++){
		cout<<"Enter value of student "<<i+1<<" : "<<arr[i]<<endl;
	}
	//we can also store data in file using fstream
    //and then read it from file
	return 0;
}