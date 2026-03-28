#include<iostream>
using namespace std;
main()
{
    string n[100];
    int num;
    cout<<"enter names of students: ";
    for(int i=0;i<5;i++)
    {
        cin>>n[i];
    }
    cout<<"student names: ";
    for(int j=0;j<5;j++)
    {
        cout<<n[j]<<endl;
    }
}