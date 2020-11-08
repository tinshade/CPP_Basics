//Generate Multiplication Table
#include <iostream>
using namespace std;

int main(){
	cout << "Generate Multiplication Table for a number upto n" << endl;
	int n,e;
	cout << "Enter two positive integers ('Table of' and 'Table till' respectively)"<< endl;
	cin >> n >> e;
	if(n>0 && e>0){
		for(int i=1; i<=(int)e; i++){
			cout<< i*(int)n << endl;
		}
	}else{
		cout << "I mentioned positive too!" << endl;
	}
}