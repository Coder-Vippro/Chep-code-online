#include <bits/stdc++.h>
using namespace std;
string s;
int main()
{
    freopen("XAUKT.INP","r",stdin);
    freopen("XAUKT.OUT","w",stdout);
    getline(cin,s);
    int demkt=0,demso=0,demcach=0;
    for(int i=0;i<s.size();i++)
    {
        if(s[i]>='A' && s[i]<='z')demkt++;
        if(s[i]>='0' && s[i]<='9')demso++;
        if(s[i]==' ')demcach++;
    }
    cout<<demkt<<'\n'<<demso<<'\n'<<demcach;
}