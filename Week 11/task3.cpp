#include <iostream>
using namespace std;
void toyotablue(int cars[][5],int blue);
int totalred(int cars[][5],int sum);
int totalnissan(int cars[][5],int sumn);
main()
{
    int blue = 0;
    int sum = 0;
    int sumn = 0;
    int rowSize = 5;
    int colSize = 5;
    int cars[5][5] =
        {
            {10, 7, 12, 10, 4},
            {18, 11, 15, 17, 2},
            {23, 19, 12, 16, 14},
            {7, 12, 16, 0, 2},
            {3, 5, 5, 2, 1}};
    toyotablue(cars,blue);
    cout<<"\n";
    totalred(cars,sum);
    cout<<"\n";
    totalnissan(cars,sumn);
}
void toyotablue(int cars[][5],int blue)
{
    cout << cars[1][3];
}
int totalred(int cars[][5],int sum)
{
    for (int i = 0; i < 5; i++)
    {
        sum = sum + cars[i][0];
    }
    return sum;
}
int totalnissan(int cars[][5],int sumn)
{
     for (int i = 0; i < 5; i++)
    {
        sumn = sumn + cars[2][i];
    }
    return sumn;
}