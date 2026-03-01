#include <iostream>
using namespace std;

main()
{
float MB,KB,byte,bit;
cout<<"Enter size in MBs : ";
cin>>MB;

KB=MB*1024;
byte=KB*1024;
bit=byte*8;

cout<<"The number of bits in the entered amount of MBs is :"<<bit;
}