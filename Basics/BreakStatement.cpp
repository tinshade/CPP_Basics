//Using the Break statement in C++
#include <iostream>
using namespace std;

int main(){

	//Break with FOR Loop
	cout << "BREAK with FOR Loop"<<endl;
	//The following loop breaks when count reaches 10
	for(int i=0; i<=100; ++i){
		if(i == 10){
			break;
		}
		cout << i << " ";
	}



	//Break with WHILE Loop
	cout << "BREAK with WHILE Loop"<<endl;
	int n = 10;
	cout << "Value of n:" << n <<endl;
	//Breaks when n becomes negative
	while(true){
		if(n < 0){
			break
		}
		cout << n <<" ";
		n--;
	}
	cout << "While Loop Ended!"<<endl;
	cout << "\n" <<endl;


	
	//Break with NESTED Loop
	/*
		In the following loop, the break statement is executed when i == 2.
		It terminates the inner loop, moving the control flow to the outer loop.
		Hence, the value of i = 2 is never displayed in the output.
	*/
	cout << "BREAK with NESTED Loop"<<endl;
    for (int i = 1; i <= 3; i++) {
        for (int j = 1; j <= 3; j++) {
            if (i == 2) {
                break;
            }
            cout << "i = " << i << ", j = " << j << endl;
        }
    }


	return 0;
}