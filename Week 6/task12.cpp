#include <iostream>
using namespace std;
main()
{
    int n;
    cout<<"Enter number of elements: ";
    cin>>n; 
    int arr[100],u[100]; 
    int count=0;  
    for(int i=0;i<n;i++)
    {
        cout<<"Enter numbers, one per line: ";
        cin>>i;
        bool is=false;
        for (int j=0;j<count;j++)
        {
            if(i==u[j])
            {
            is=true;
            }
        }
        if(is)
        {
            cout<<"Already entered: "<<i<<endl;
        }
        else
        {
            u[i]=i;
            count++;
        }
    }
    cout<<"Unique numbers entered: ";
    for(int j=0;j<count;j++)
    {
        cout<<u[j]<<endl;
    }
}