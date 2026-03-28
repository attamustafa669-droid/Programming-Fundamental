#include<iostream>
using namespace std;
main()
{
 int num,n[100];
 cout<<"Enter number of elements: ";
 cin>>num;
 cout<<"Enter numbers, one per line: "<<endl;
    for(int i=0;i<num;i++)
    {
        cin>>n[i];
    }
    int l=n[0];
    for(int i=1;i<num;i++)
        {
            if(n[i]>l)
            {
                l=n[i];
            }
        }
 cout<<"Largest numbers entered: "<<l<<endl;
}