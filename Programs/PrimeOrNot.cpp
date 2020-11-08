//Check if a number is prime or not
#include <iostream>
using namespace std;

int main(){
	int n;
	bool check=true;
	cout << "Enter a positive integer: ";
	cin >> n;
	n = (int)n;
	if(n == 0 || n == 1){
		check = false;
	}else{
		if(n>0){
			for(int i=2;i<n/2;i++){
				if(n%i==0){
					check = false;
					break;
				}
			}
		}else{
			cout << "I was expecting a positive integer!"<<endl;
		}
	}
	if(check){
		cout<<n<<" is a prime number!";
	}else{
		cout<<n<<" is not a prime number!";
	}
}