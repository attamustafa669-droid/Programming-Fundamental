#include<iostream>
using namespace std;
int main()
{
    int num,n[100],s[100];
    string d[100];
    cout<<"enter number of flights: ";
    cin>>num;
    cout<<"enter flight number: \n ";
    for(int i=0;i<num;i++)
    {
        cin>>n[i];
    }
    cout<<"enter destination: \n";
    for(int i=0;i<num;i++)  
    {
        cin>>d[i];
    }
    cout<<"enter seats: \n";
    for(int i=0;i<num;i++)
    {
        cin>>s[i];
    }
    cout<<"/n------Flight info------\n";
    for(int i=0;i<num;i++)
    {
        cout<<"flight "<<n[i]<<" to "<<d[i]<<" has "<<s[i]<<" seats available"<<endl;
    } 
    cout<<"/n---flights with less than 5 seats available--- \n";
    for(int i=0;i<num;i++)
    {
     cout<<"flight "<<n[i]<<" to "<<d[i]<<" has only "<<s[i]<<" seats left"<<endl;
    }
    cout<<endl;
}