//All IF conditionals in C++

#include <iostream>
using namespace std;

int main(){

	//Check if number is positive with IF
	cout << "Check if number is positive with IF" <<endl;
	cout << "\n" <<endl;
	int number;
	cout << "Enter a number: " <<endl;
	cin >> number;
	if(number>0){
		cout << number << " is Positive!";
	}
	cout << "I am a default statement!" <<endl; //This is executed no matter what.



	//Check if number is positive or negative with IF-ELSE
	cout << "Check if number is positive or negative with IF-ELSE" <<endl;
	cout << "\n" <<endl;
	int number1;
	cout << "Enter a number: " <<endl;
	cin >> number1;
	if(number>0){
		cout << number1 << " is Positive!";
	}else{
		cout << number1 << " is Negative!";
	}
	cout << "I am a default statement!"<<endl;

	
	//Check if the number is +ve, -ve or 0 with IF-ELSEif-ELSE
	cout << "\n" <<endl;
	cout << "Check if the number is +ve, -ve or 0 with IF-ELSEif-ELSE" <<endl;
	cout << "\n" <<endl;
	int number2;
	cout << "Enter a number"<<endl;
	cin >> number2;

	if(number > 0){
		cout<< number2 << " is Positive!";
	}else if(number <0){
		cout<< number2 << " is Negative!";
	}else{
		cout<<"You entered 0!";
	}

	//Check if number is odd or even with NESTED IF-ELSE
	cout << "\n" <<endl;
	cout << "Check if number is odd or even with NESTED IF-ELSE" <<endl;
	cout << "\n" <<endl;
	int number3;
	cout << "Enter a number" <<endl;
	cin >> number3;

	if(number3 != 0){
		if(number3%2 == 0){
			cout<< number3 << " is an even number!";
		}else{
			cout<< number3 << " is an odd number!";
		}
	}else{
		cout << "You entered 0!"<<endl;
	}


	//Check if number is odd or even with IF-ELSE and BITWISE Operators
	cout << "\n" <<endl;
	cout << "Check if number is odd or even with IF-ELSE and BITWISE Operators" <<endl;
	cout << "\n" <<endl;


	//This can be achieved with command chaining!
	int number4;
	cout << "Enter a number" <<endl;
	cin >> number4;

	if(number4 != 0 && number4%2 == 0){
		cout<< number4 << " is an even number!" <<endl;
	}else{
		cout<< number4 << " is an odd number!" <<endl;
	}

	return 0;
}