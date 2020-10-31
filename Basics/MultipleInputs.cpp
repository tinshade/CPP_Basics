//Taking multiple inputs from the user in C++

#include <iostream>
using namespace std;

int main(){
	char a;
	int num;

	cout<< "Enter a single character and an integer: ";
	cin >> a >>num;

	cout<< "Character: "<<a<<endl;
	cout<< "Number: "<<num<<endl;

	return 0;

}

// OUTPUT
// Enter a character and an integer: F 2
// Character: F
// Number: 2