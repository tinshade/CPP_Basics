//Getting the data-type of the variable in C++
 
#include <iostream>
using namespace std;

int main(){
	char k;
	cout << "Type of the variable declared as 'k' is : "<<typeid(k).name()<<endl;
	//i is for int, c is for char, d is for double and so on...
	return 0;
}