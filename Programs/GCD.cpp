//Finding GCD of two numbers with C++
#include <iostream>
using namespace std;

int main(){
	int n1,n2;
	cout << "Enter two numbers:"<<endl;
	cin >> n1 >> n2;

	//Using WHILE Loop
	while(n1!=n2){
		if(n1>n2){
			n1 -= n2;
		}else{
			n2 -= n1;
		}
	}
	cout << "GCD using WHILE Loop" <<endl;
	cout << "GCD: " << n1 <<endl;


	//Using FOR Loop
	int smaller, hcf;
	if(n1>n2){
		smaller = n2;
	}else{
		smaller = n1;
	}
	for(int i=1; i<=smaller; i++){
		if(n1%i==0 && n2%i==0){
			hcf = i;
		}
	}
	cout << "GCD using FOR Loop" <<endl;
	cout << "GCD: " << hcf <<endl;

	return 0;
}