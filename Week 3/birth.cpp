#include <iostream>
using namespace std;

main()
{
int population,birthrate,time;
cout<<"Enter current world population : ";
cin>>population;

cout<<"Enter monthly birth rate : ";
cin>>birthrate;

time = 30 * 12 * birthrate;

cout<<"Population in three decades will be : "<<time;
}