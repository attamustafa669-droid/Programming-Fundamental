#include <iostream>
using namespace std;

main()
{
int wins,draws,losses,pwins,pdraws,plosses,total;

cout<<"Enter number of wins : ";
cin>>wins;
cout<<"Enter number of draws : ";
cin>>draws;
cout<<"Enter number of losses : ";
cin>>losses;

pwins = wins * 3;
pdraws = draws * 1;
plosses = losses * 0;

total = pwins + pdraws + plosses;

cout<<"Pakistan has obtained "<<total<<"points in Asia Cup";
}