#include <iostream>
using namespace std;
main()
{
    int Resistor,Resistance[100],TotalR=0;
    cout<<"Enter the number of resistors in series: ";
    cin>>Resistor;
    for(int i=0;i<Resistor;i++)
    {
        cout<<"Enter the resistance values: ";
        cin>>Resistance[i];
        TotalR=Resistor+Resistance[i];
    }
    cout<<"Total resistance: "<<TotalR;
}