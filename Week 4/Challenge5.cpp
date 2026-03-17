#include<iostream>
using namespace std;

main()
{
 int bill,discount;
 cout<<"Enter your bill : "; 
 cin>>bill;
 
 if (bill<=5000)
 {
    discount = (bill/100)*5;
    cout<<"Your discounted bill is : "<<bill - discount ;
 }
 else
 {
    discount = (bill/100)*10;
     cout<<"Your discounted bill is : "<<bill - discount ;
 }
 
    
}