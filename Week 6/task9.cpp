#include<iostream>
using namespace std;
main()
{
   char word[100];
   cout<<"Enter a name: ";
   cin>>word;
   
   for(int i=0;word[i]!='\0';i--)
        {
            cout<<"Reversed string: "<<word[i];
        }
}