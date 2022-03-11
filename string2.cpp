#include <iostream>
#include <string.h>
#include <stdlib.h>
using namespace std;

int main()
{
string input;
cout << "Please enter a message to be encoded: ";
getline(cin,input);
for(int i=0; i<input.length();i++)
	{
	switch(input[i])
	{
		case 'a':
		case 'A': input[i]='*'; break;
		case 'e':
		case 'E': input[i]='$'; break;
		case 'i':
		case 'I': input[i]='/'; break;
		case 'o':
		case 'O': input[i]='+'; break;
		case 'u':
		case 'U': input[i]='-'; break;
	}
	}
	cout << input;
return 0;
}
