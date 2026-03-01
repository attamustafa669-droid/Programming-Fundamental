#include <iostream>
using namespace std;

main()
{
string name;
int matric,inter,ecat;
float pmatric,pinter,pecat,aggregate;

cout<<"Enter your name : ";
cin>>name;

cout<<"Enter your marks in matric : ";
cin>>matric;

cout<<"Enter your marks in intermediate : ";
cin>>inter;

cout<<"Enter your marks in Ecat : ";
cin>>ecat;

pmatric=matric*10/1100;
pinter=inter*40/550;
pecat=ecat*50/400;

aggregate=pmatric+pinter+pecat;

cout<<"your aggregate is : "<<aggregate;
}