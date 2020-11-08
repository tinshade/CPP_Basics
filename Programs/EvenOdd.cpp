//Check whether entered number is even or odd with C++
#include <iostream>
using namespace std;

int main(){
	int n;
	cout<<"Check whether entered number is even or odd with C++"<<endl;
	cout << "Enter any number"<<endl;
	cin >> n;
	if(n%2 == 0){
		cout<<"The number "<<n<<" is even!"<<endl;
	}else{
		cout<<"The number "<<n<<" is odd!"<<endl;
	}
}