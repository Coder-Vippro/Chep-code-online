#include <iostream>
#include <cstdio>
#include <string>
using namespace std;
string s;
int dem1=0,dem2=0;
int main()
{
    freopen("XAU1.INP","r",stdin);
    freopen("XAU1.OUT","w",stdout);
    getline(cin,s);
    for(int i=0;i<s.size();i++)
    {
        if(s[i]==' ')dem2++;
        dem1++;
    }
    cout<<dem1<<'\n'<<dem2;
    return 0;
}
