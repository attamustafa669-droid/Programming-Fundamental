#include<iostream>
using namespace std;

main()
{
int hours,min,sec;
cout<<"Enter time in hours : ";
cin>>hours;

min = hours*60;
sec = min * 60;

cout<<"The entered number of hours have "<<sec;
cout<<"seconds";
}