#include <iostream>
using namespace std;
main()
{
   int s,size[100];
   bool a=true;
   cout<<"enter size of array: ";
   cin>>s;
   
   for(int i=0;i<s;i++)
   {
        cout<<"enter elements of array: ";
        cin>>size[i];
   
        if(s%2!=size[i]%2)
            {
                a=false;
            }
    }
    if(a)
    {
        cout<<"true\n";
    }
    else
    {
        cout<<"false\n";
    }
}