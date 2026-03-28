#include <iostream>
using namespace std;
main()
{
    int n;
    int num[100];
    cout<<"Enter a number: ";
    cin>>n;
    for(int i=0;i<n;i++)
    {
        cout<<"Enter "<<n<<" numbers, one per line: "<<i<<endl; 
    }
    for(int j=n-1;j>=0;j--)
    {
        cout<<"Numbers in reverse order: "<<j<<endl;
    }
}