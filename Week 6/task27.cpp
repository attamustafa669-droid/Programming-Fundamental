#include <iostream>
using namespace std;
main()
{
    int k=0;
    int n;
    string num[100];
    cout<<"enter name of customers: ";
    cin>>n;
    cout<<"names: ";
    for(int i=0;i<n;i++)
    {
        cin>>num[i];
    }
    char l;
    cout<<"enter letter to check: ";
    cin>>l;
    cout<<"total names starting with '"<<l<<"': ";
    for(int j=0;j<n;j++)
    {
        if(num[j][0]==l)
        {
            k++;
        } 
    }
    cout<<k<<endl;
}