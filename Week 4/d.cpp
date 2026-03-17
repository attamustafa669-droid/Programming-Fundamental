#include<iostream>
using namespace std;

main()
{
 string shape;
 float base, height, radius, area;
 if (shape = square)
 {
    cout << "Enter the base of the square" << endl;
    cin >>base;
    area = base * base;
 }
  if (shape = rectangle)
  {
    cout << "Enter the base and height of the rectangle" ;
    cin >> base;
    cin >> height;
    area = base * height ;
}
if (shape = circle)
{
        cout << "Enter the radius of the circle ";
    cin >> radius;
    area = ( 22 / 7 ) * ( radius * radius );
    }
    if (shape = triangle)
    {
        cout << "Enter the base and height of the triangle";
        cin >> base;
        cin >> height;
        area = 1/2 * base * height;
    }
    cout<<"Area : "<< area;
}