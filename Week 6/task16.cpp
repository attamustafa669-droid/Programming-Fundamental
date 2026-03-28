#include <iostream>
using namespace std;
main()
{
  double q,d,n,p,bill,due;
  cout<<"enter quarters: ";
  cin>>q;
  cout<<"enter dimes: ";
  cin>>d;
  cout<<"enter nickels: ";
  cin>>n;
  cout<<"enter pennies: ";
  cin>>p;
  bill=(q*0.25)+(d*0.10)+(n*0.05)+(p*0.01);
  cout<<"total bill: "<<bill<<endl;
  cout<<"enter total bill due: ";
  cin>>due;
  cout<<"can u pay the amount? "<<endl;
  if(bill>=due)
  {
    cout<<"yes";
  }
  else
  {
    cout<<"no";
  }
}