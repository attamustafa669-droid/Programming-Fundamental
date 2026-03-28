#include<iostream>
using namespace std;
main()
{
    int sum=0;
    float ave=0;
    int num[5]={1,2,3,4,5};
    for(int i=0;i<5; i++)
        {
            sum=sum+num[i];
        }
    ave=sum/5;
    cout<<"Sum: "<<sum<<endl;
    cout<<"Average: "<<ave<<endl;
}