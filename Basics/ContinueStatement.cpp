//Continue Statement in C++
#include <iostream>
using namespace std;

int main(){

	//CONTINUE with FOR Loop
	cout << "CONTINUE with FOR Loop" << endl;
	//Prints all ODD numbers from 1 to 10
	for(int i =1; i<=10; i++){
		if(i%2 == 0){
			continue;
		}
		cout<<i<<" ";
	}
	cout <<endl;
	//CONTINUE with WHILE Loop
	cout << "CONTINUE with WHILE Loop" << endl;
	//Calculating sum of positive integer within 20
	int sum = 0;
	int chance = 3;
	while(true && chance > 0 ){
		int number;
		cout << "Enter a number: " << endl;
		cin >> number;
		if(number>=0){
			if(number>20){
				cout<<"Only accepting 0-20!" <<endl;
				continue;
			}else{
				sum += number;
				cout << "The Sum is: "<< sum <<endl;
			}
		}else{
			if(chance == 0){
				cout << "The Sum is: "<< sum <<endl;
				break;
			}else{
				cout<<"Enter positive numbers only!"<<endl;
				chance--;
				cout<<"You have "<< chance << " try left!"<<endl;
				continue;
			}
		}
	}
	cout << "The Sum is: "<< sum <<endl;
	return 0;
}