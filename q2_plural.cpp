#include <iostream>
#include <string>
using namespace std;

int main()
{
	string str,str2;
	int n;
	char ch,ch2;

	cout<<"singular\t\tplural\n"<<endl;

	
		cin>>str;
		n=str.length();
		ch=str[n-1];
		ch2=str[n-2];

		if (ch=='y')
			str2=str.substr(0,n-1)+"ies";
		else if (ch=='o'||ch=='s'||ch=='x')
			str2=str+"es";
		else if (ch=='h'&& ch2=='c')
			str2=str+"es";
		else if (ch== 'f')
			str2=str.substr(0,n-1)+"ves";
		else if (ch=='e'&&ch2=='f')
			str2=str.substr(0,n-2)+"ves";
		else
			str2=str+"s";
		
		cout<<"\t\t\t"<<str2<<endl;
	

}
