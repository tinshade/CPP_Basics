//Operators and their use in C++

#include <iostream>
using namespace std;

int main(){
	////////////////////////////////
	//////Arithmetic Operators//////
	////////////////////////////////
	

	int a = 7, b = 10;
	cout << "A: " << a << endl;
	cout << "B: " << b << endl;
	//Sum
	cout << "Sum" << endl;
	cout << (a+b) <<endl;

	//Difference
	cout << "Difference" << endl;
	cout << (a-b) <<endl;

	//Product
	cout << "Product" << endl;
	cout << (a*b) <<endl;

	//Division
	cout << "Division" << endl;
	cout << (a/b) <<endl;

	//Modulous
	cout << "Modulous" << endl;
	cout << (a%b) <<endl;

	/////////////////////////////
	//////Inc&Dec Operators//////
	/////////////////////////////

	//PreIncrement
	int numi = 5;
	cout << "PreIncrement" << endl;
	cout << "Num: " << numi << endl;
	cout << (++numi) << endl; //Prints 6

	//PostIncrement
	cout << "PostIncrement" << endl;
	cout<< (numi++) <<endl; //Prints 5

	//PreDecrement
	int numd = 10;
	cout << "PreDecrement" << endl;
	cout << "Num: " << numd << endl;
	cout << (--numd) << endl; //Prints 9

	//PostDecrement
	cout << "PostDecrement" << endl;
	cout << (numd++) << endl; //Prints 10




	////////////////////////////////
	//////Relational Operators//////
	////////////////////////////////



	int aa = 10;
	int bb = 20;
	cout << "A: " << aa <<endl;
	cout << "B: " << bb <<endl;


	//Less than
	cout << "Less Than" <<endl;
	cout << (aa<bb) << endl; //True

	//More Than
	cout << "More Than" <<endl;
	cout << (aa>bb) << endl; //False

	//Less Than or Equal To
	cout << "Less Than or Equal To" <<endl;
	cout << (aa<=bb) << endl; //True

	//More Than or Equal To
	cout << "More Than or Equal To" <<endl;
	cout << (aa>=bb) << endl; //False

	//Is Equal
	cout << "Is Equal" <<endl;
	cout << (aa == bb) << endl; //False

	//Is Not Equal
	cout << "Is Not Equal" <<endl;
	cout << (aa != bb) << endl; //True




	/////////////////////////////
	//////Logical Operators//////
	/////////////////////////////


	bool result;

	//Logical AND
	cout << "Logical AND" <<endl;
    result = (3 != 5) && (3 < 5);     // true
    cout << "(3 != 5) && (3 < 5) is " << result << endl;

    result = (3 == 5) && (3 < 5);    // false
    cout << "(3 == 5) && (3 < 5) is " << result << endl;

    result = (3 == 5) && (3 > 5);    // false
    cout << "(3 == 5) && (3 > 5) is " << result << endl;

    //Logical OR
    cout << "Logical OR" <<endl;
    result = (3 != 5) || (3 < 5);    // true
    cout << "(3 != 5) || (3 < 5) is " << result << endl;

    result = (3 != 5) || (3 > 5);    // true
    cout << "(3 != 5) || (3 > 5) is " << result << endl;

    result = (3 == 5) || (3 > 5);    // false
    cout << "(3 == 5) || (3 > 5) is " << result << endl;

    //Logical NOT
    cout << "Logical NOT" <<endl;
    result = !(5 == 2);    // true
    cout << "!(5 == 2) is " << result << endl;

    result = !(5 == 5);    // false
    cout << "!(5 == 5) is " << result << endl;


    /////////////////////////////
	//////Bitwise Operators//////
	/////////////////////////////
	

	int a2 = 12, b2 = 23;

	cout << "A: " << a2 << endl;
	cout << "B: " << b2 << endl;
	//Bitwise AND
	cout << "Bitwise AND" <<endl;
	cout << (a2&b2) <<endl;

	//Bitwise OR
	cout << "Bitwise OR" <<endl;
	cout << (a2|b2) <<endl;

	//Bitwise XOR
	cout << "Bitwise XOR" <<endl;
	cout << (a2^b2) <<endl;

	//Bitwise 2's Complement
	cout << "Bitwise 2's Complement" <<endl;
	cout << (~a2) <<endl;

	return 0;
}