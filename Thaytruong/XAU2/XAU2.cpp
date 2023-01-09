#include <iostream>
#include <string>
#include <cstdio>
using namespace std;
string s;
int tu=0,so=0,thuong=0,hoa=0,khac=0;
int main()
{
    freopen("XAU2.INP","r",stdin);
    freopen("XAU2.OUT","w",stdout);
    getline(cin,s);
    s.insert(0," ");
    for(int i=0;i<s.size();i++)
    {
        if(s[i]==' ' && s[i+1]>=33 && s[i+1]<=126)
            tu++;
        if(s[i]>='0' && s[i]<='9')
            so++;
        else if(s[i]>='a' && s[i]<='z')
            thuong++;
        else if(s[i]>='A' && s[i]<='Z')
            hoa++;
        else khac++;

    }
    cout<<tu<<'\n'<<so<<'\n'<<thuong<<'\n'<<hoa<<'\n'<<khac-1;
    return 0;
}
