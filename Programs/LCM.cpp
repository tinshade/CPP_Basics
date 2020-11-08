//Finding LCM of two number with C++
#include <iostream>
using namespace std;

int main(){

	//Finding LCM with WHILE Loop
	int a,b;
	int lcm = 1;
	cout << "Enter two numbers" <<endl;
	cin >> a >> b;

	while(true){
		if(lcm%a==0 && lcm%b==0){
			break;
		}else{
			lcm++;
		}
	}
	cout << "LCM with WHILE Loop" << endl;
	cout << "LCM of "<<a<<" and "<<b<<" is: "<<lcm<<endl;

	//LCM with HCF
	//Formula: LCM = (a*b)/HCF

	int smaller, hcf;
	if(a>b){
		smaller = b;
	}else{
		smaller = a;
	}
	//Calculating the HCF
	for(int i=1; i<=smaller; i++){
		if(a%i==0 && b%i==0){
			hcf = i;
		}
	}
	lcm = ((a*b)/hcf); //Calculating LCM using the above formula
	cout << endl;
	cout << "LCM with HCF" << endl;
	cout << "LCM of "<<a<<" and "<<b<<" is: "<<lcm<<endl;
	return 0;

}
//LCM of 12 and 18 is 36