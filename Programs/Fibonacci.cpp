//Fibonacci Sequence with C++
#include <iostream>
using namespace std;

int main(){
	int s, e, n1=0, n2=1;
	cout << "Printing Fibonacci upto n Terms"<<endl;
	cout << "Enter a number:" <<endl;
	cin >> e;
	cout << "0 1 ";
	for(int i=0; i<e-2; i++){
		int temp = n2+n1;
		n1 = n2;
		n2 = temp;
		cout << n2 << " ";
	}
	cout << endl;

	cout << "Printing Fibonacci upto n"<<endl;
	int nextTerm, t1=0,t2=1;
	cout << "0 1 ";
	nextTerm = t1 + t2;

    while(nextTerm <= e)
    {
        cout << nextTerm << " ";
        t1 = t2;
        t2 = nextTerm;
        nextTerm = t1 + t2;
    }
	cout << endl;

}