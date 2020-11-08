//FOR, WHILE and Do-WHILE Loops in C++
#include <iostream>
using namespace std;

int main(){

	//FOR Loop
	cout << "FOR Loop" << endl;
	int end;
	cout << "Enter a number: ";
	cin >> end;

	for(int i = 1; i<=end; i++){
		cout<<i<<" "; //Prints number from 1 to end
	}

	//Range-Based FOR Loop
	cout << "Range-Based FOR Loop" << endl;
	int nums[] = {1,2,3,4,5,6,7,8,9,10};
	//Following loop will run till all items have been iterated over
	//Like For Each in Pyton
	for(int n : nums){
		cout << n << " ";
	}


	//Infinite Loop with FOR
	cout << "Infinite Loop with FOR" << endl;
	//The following loops will run as long as i is greater than 0.
	//Since i is not being changed, the loop runs for infinite iterations!
	for(int i=1; i>0; i++){
		count << "INFINITY AND BEYOND!" << endl;
	}
	
	return 0;
}