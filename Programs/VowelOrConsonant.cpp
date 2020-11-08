#include <cctype>
#include <iostream>
using namespace std;

int main()
{
    char c;
    int isVowel;

    cout << "Enter an alphabet: ";
    cin >> c;
    c = tolower(c);
    isVowel = (c == 'a' || c == 'e' || c == 'i' || c == 'o' || c == 'u');
    if (isVowel)
        cout << c << " is a vowel.";
    else
        cout << c << " is a consonant.";

    return 0;
}