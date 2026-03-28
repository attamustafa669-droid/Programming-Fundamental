#include<iostream>
using namespace std;
main()
{
    int n,n1[100];
    cout<<"Enter number of elements for first array: ";
    cin>>n;
    cout<<"Enter elements for first array:";
    for (int i=0;i<n;i++)
    {
        cin>>n1[i];
    }
    int num,num1[100];
    cout<<"Enter number of elements for second array: ";
    cin>>num;
    cout<<"Enter elements for second array: ";
    for(int j=0;j<num;j++)
    {
        cin>>num1[j];
    }
    cout<<"Resulting array: ["<<n1[0]<<"]";
    for(int j=0;j<num;j++)
    {
        cout<<num1[j]<<",";
    }
    cout<<n1[1]<<"]"<<endl;
}