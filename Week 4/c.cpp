#include<iostream>
using namespace std;

int main()
{
float area, base, height, radius;
int n;
cout << "If the shape is a square,enter 1" << endl;
cout << "If the shape is a rectangle,enter 2" << endl;
cout << "If the shape is a circle,enter 3" << endl;
cout << "If the shape is a triangle,enter 4" << endl;
cin >> n;
if(n = 1)
{
cout << "Enter the base of the square" << endl;
cin >>base;
area = base * base;
} 
if(n = 2)
{
cout << "Enter the base and height of the rectangle" ;
cin >> base;
cin >> height;
area = base * height ;
} 
if(n = 3)  
{
cout << "Enter the radius of the circle ";
cin >> radius;
area = ( 22 / 7 ) * ( radius * radius );
}
if(n = 4)
{
cout << "Enter the base and height of the triangle";
cin >> base;
cin >> height;
}
cout << "Area : "<< area << endl;
}