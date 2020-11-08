//Calculate the factorial of a given number
#include <iostream>
using namespace std;

int main(){
	unsigned int n;
	unsigned int factorial = 1;
	cout << "Enter a positive integer" <<endl;
	cin >> n;
	n=int(n);
	if(n>0){
		if(n==1){
			cout<< 1<<endl;
		}else if(n==2){
			cout<< 2 <<endl;
		}else{
			for(int i=2; i<=n; i++){
				factorial *= i;
			}
		}
	}else{
		cout << "I was expecting a positive integer!"<<endl;
	}
	cout << factorial<<endl;
}