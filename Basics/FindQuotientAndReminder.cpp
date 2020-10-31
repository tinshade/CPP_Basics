#include <iostream>
using namespace std;

int main(){
	int divisor, dividend, quotient, remainder;

	cout<<"Enter dividend\n";
	cin>>dividend;

	cout<<"Enter divisor\n";
	cin>>divisor;

	quotient = dividend/divisor;
	remainder = dividend % divisor;

	cout<< "Quotient = " <<quotient<<endl;
	//endl is endline similar to \n
	cout<< "Remainer = " <<remainder;

	return 0;

}