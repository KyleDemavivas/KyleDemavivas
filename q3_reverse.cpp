#include<iostream>
#include<cstdio>
using namespace std;
int main()
{
   int i, prev, next, j, k;
   char st[100];
   cout<<"\n\nEnter The Sentence: ";
   gets(st);
   for(i=0;st[i]!='\0';i++) 
   prev=i;
   for(k=i-1;k>=0;k--)
   { 
    if(st[k]==' '||k==0)
    {
     if(k==0)
     {
     next=0;
 }
     else
     {
     next=k+1;
 }
   
     for(j=next;j<=prev;j++)
     {
     cout<<st[j];
     } 
 cout<<" ";
     prev=next-2;  
    }
   }

   return 0;
}