#include <iostream>
#include <string.h>
#include <stdlib.h>
#include <conio.h>
using namespace std;

int main()
{
	 char word[20], word2[20];
    int i, j, len = 0, flag = 0;
    cout << "Enter the string : ";
    gets(word);
    len = strlen(word) - 1;
    for (i = len, j = 0; i >= 0 ; i--, j++)
        word2[j] = word[i];
    cout << len << "\n";
    cout << word2;
    return 0;
}

/*for(int i=0; i<word.length();i++)
	{
		
	}*/
