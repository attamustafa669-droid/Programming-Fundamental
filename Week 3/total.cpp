#include <iostream>
using namespace std;

main()
{
string name;
float adult, child, adultsold, childsold, charity, total, leftamount;
cout<<"Name of the movie : ";
cin>>name;
cout<<"Price of adult ticket : ";
cin>>adult;
cout<<"Price of child tickrt : ";
cin>>child;
cout<<"Number of adult tickets sold : ";
cin>>adultsold;
cout<<"Number of child tickets sold : ";
cin>>childsold;
cout<<"Amount of charity in percentage : ";
cin>>charity;
leftamount =100 * charity/total;

total = adult * adultsold + child * childsold;
cout<<"Total earning : "<<total;
cout<<"Charity : "<<leftamount;
}