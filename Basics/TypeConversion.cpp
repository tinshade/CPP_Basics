//Type Conversion in C++
#include <iostream>
using namespace std;

int main(){
	int num = 10;
	cout<< "Data type of the variable num before conversion: "<<typeid(num).name()<<endl;
	double num_d = num;
	cout<< "Data type of the variable num after conversion: "<<typeid(num_d).name()<<endl;
	//i is for int, c is for char, d is for double and so on...

	//AUTOMATIC CONVERSION
	float fnum = 75.2;
	int inum;
	inum = fnum;
	cout << "Converted float: "<<fnum<<" to int as: "<<inum<<endl;
	
	return 0;
}