#include <iostream>
using namespace std;
main()
{
    int c;
    string c1[100];
    cout<<"enter number of cords: ";
    cin>>c;

    for(int i=0;i<c;i++)
    {
    cout<<"enter cord per line: ";
    cin>>c1[i];
    string w=c1[i];

    if(w[w.length()-1]!='7')
        {
            c1[i]=w+"7";\
        }
    }
    cout<<"jazzified chords: ";
    for(int i=0;i<c;i++)
    {
        cout<<c1[i]<<" ";
    }
}