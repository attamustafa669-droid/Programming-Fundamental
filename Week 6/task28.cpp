#include<iostream>
#include<string>
#include<algorithm>
using namespace std;
main()
{
    int num;
    string n[100];
    cout<<"enter number of students: ";
    cin>>num;
    cout<<"enter their names: "<<endl;
    for(int i=0;i<num;i++)
    {
        cin>>n[i];
    }
    sort(n,n+num);
    cout<<"\nstudents in alphabetic order: \n"<<endl;
    for(int i=0;i<num;i++)  
    {
        cout<<n[i]<<endl;
    }
}