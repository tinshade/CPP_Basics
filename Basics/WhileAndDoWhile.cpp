//WHILE AND DO-WHILE Loops in C++
#include <iostream>
using namespace std;

int main(){

	//WHILE Loop
	cout<<"WHILE Loop"<<endl;
	int i = 1;
	//Prints numbers from 1 to 5
	while(i<=5){
		cout<<i<<" ";
		i++;
	}

	//DO WHILE Loop
	cout << "DO-WHILE Loop"<<endl;
	int i = 1;
	do{
		cout<<"i: "<<i<<endl;
		i++;
	}
	while(i<=5);

	

	//Infinite Loop with WHILE 
	cout<<"Infinite Loop with WHILE"<<endl;
	//true keyword will always be true, hence the loop is inifite!
	while(true){
		cout<<"INFINITY AND BEYOND!"<<endl;
	}

	return 0;


}