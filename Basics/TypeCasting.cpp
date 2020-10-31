//Type casting/Cast notation in C++

#include <iostream>
#include <cstdlib>// needed for atoi()
#include <string> // needed for string datatype
using namespace std;

int main(){
	int num = 10;
	double num_d;

	//C-Styled Type Casting
	num_d = (double)num;
	cout<< "Variable num is of type :"<<typeid(num).name()<<"\nVariable num_d is of type: "<<typeid(num_d).name()<<"\nnum: "<<num<<"\nnum_d: "<<num_d<<endl;

	//FUNCTION BASED TYPE CASTING
	cout<<"=====FUNCTION BASED TYPE CASTING====="<<endl;
	double d_num=10.12;
	cout<<"Variable of type double holds value of: "<<d_num<<endl;
	cout<<"=====CONVERTING FROM DOUBLE TO INT====="<<endl;
	cout<<"After Convertion: "<<int(d_num)<<endl; //10.12 will be rounded to 10 in integer conversion!

	cout<<"=====CONVERTING FROM STRING TO INT USING ATOI====="<<endl;
	char c[] = "41";
	cout<< "Variable c is of type: "<< typeid(c).name()<<" with value: "<<c<<endl;
	cout<< "Type Casting variable c to int gives the type as: "<< typeid(atoi(c)).name()<<endl;

	cout<<"=====CONVERTING FROM STRING TO INT USING STOI====="<<endl;
	string stoi_c= "410";
	cout<< "Variable stoi_c is of type: "<< typeid(stoi_c).name()<<" with value: "<<stoi_c<<endl;
	cout<< "Type Casting variable stoi_c to int gives the type as: "<< typeid(stoi(stoi_c)).name()<<endl;



	return 0;

}