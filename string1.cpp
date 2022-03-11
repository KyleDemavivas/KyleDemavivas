#include <iostream>
#include <string>
#include <stdlib.h>
#include <conio.h>
using namespace std;

int main()
{
string word;
cout << "Please enter the price: ";
getline(cin, word);
 cout << "The encoded price is: ";
for(int i=0;i<word.length();i++)
{
switch(word[i])
	 {
	 	case '1': cout << "C"; break;
	 	case '2': cout << "O"; break;
	 	case '3': cout << "M"; break;
	 	case '4': cout << "P"; break;
	 	case '5': cout << "U"; break;
	 	case '6': cout << "T"; break;
	 	case '7': cout << "E"; break;
	 	case '8': cout << "R"; break;
	 	case '9': cout << "S"; break;
	 	case '0': cout << "X"; break;
	 	case '.': cout << "."; break;
	 	default: cout << "-ERROR ";
	 }
}
}
