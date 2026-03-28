#include<iostream>
using namespace std;
main()
{
    string word;
    char letter;
    bool isfound =false;
    cout<<"Enter a word: ";
    cin>>word;
    cout<<"Enter character: ";
    cin>>letter;
    for(int i=0;word[i]!='\0';i++)
        {
            if(word[i]==letter) 
            {
                isfound=true;
            }
        }
    if(isfound)
        {
            cout<<letter<<" is found in "<<word;
        }
    else
        {
            cout<<letter<<" is not found in "<<word;
        }
}