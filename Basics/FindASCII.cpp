//Finding ASCII value of a given character with C++

#include <iostream>
using namespace std;

int main(){
	char c; 
	cout << "Enter a single character: \n";
	cin >> c;

	cout << "The ASCII value of "<<c<<" is "<<int(c)<<endl;

	return 0;
}