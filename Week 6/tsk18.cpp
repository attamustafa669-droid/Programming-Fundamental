#include<iostream>
using namespace std;
main()
{
    string w,r;
    cout<<"enter: ";
    getline(cin,w);

    for(int i=0;i<w.length();i++)   
    {

        if(w[i]!='a'&&w[i]!='e'&&w[i]!='i'&&w[i]!='o'&&w[i]!='u' && w[i]!='A'&&w[i]!='E'&&w[i]!='I'&&w[i]!='O'&&w[i]!='U')
        {
            r=r+w[i];
        }
    }
    cout<<"vowels removed: "<<r<<endl;
}