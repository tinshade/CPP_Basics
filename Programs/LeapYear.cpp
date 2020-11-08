//Check if entered year is a Leap Year or not
#include <iostream>
using namespace std;

int main(){
	int year;
	cout << "Enter a valid year: ";
	cin >> year;
	year = (int)year;
	if (year % 4 == 0)
    {
        if (year % 100 == 0)
        {
            if (year % 400 == 0)
                cout << year << " is a leap year!";
            else
                cout << year << " is not a leap year!";
        }
        else
            cout << year << " is a leap year!";
    }
    else
        cout << year << " is not a leap year!";

    return 0;
}