#include<iostream>
#include<string>
using namespace std;
int main()
{
    int num,n[100],q[100],t;
    float p[100];
    string name[100];
    cout<<"enter number of products:\n ";
    cin>>num;
    cout<<"enter names of products: \n";
    for(int i=0;i<num;i++)  
    {
        cin>>name[i];
    }
    cout<<"enter prices: \n";
    for(int i=0;i<num;i++)
    {
        cin>>p[i];

    }
    cout<<"enter quantity: \n";
    for(int i=0;i<num;i++)
    {
        cin>>q[i];
    } 
    for(int i=0;i<num;i++)
    {
        float t=p[i]*q[i];
        cout<<name[i]<<": $"<<p[i]<<","<<q[i]<<"in stock, total: $"<<t<<endl;
    }
}