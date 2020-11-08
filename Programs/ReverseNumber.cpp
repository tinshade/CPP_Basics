//Reverse a number with C++
#include <iostream>
using namespace std;

int main(){
	int n, remainder, reverse = 0;
	cout << "Enter a number: ";
	cin >> n;

	while(n!=0){
		remainder = n%10;
		reverse = reverse*10 + remainder;
		n /= 10;
	}
	cout << "Reverse: " <<reverse;

	return 0;

}