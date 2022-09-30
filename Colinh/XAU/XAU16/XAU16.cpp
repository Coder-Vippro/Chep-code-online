#include <bits/stdc++.h>
using namespace std;
string s;
string temp1;
string temp2;
string kq;
int main()
{
    freopen("XAU16.INP","r",stdin);
    freopen("XAU16.OUT","w",stdout);
    getline(cin,s);
    for(int i=0;i<s.size();i++)
    {
        if(s[i]>='a' && s[i]<='z')
            s.erase(i);
    }
    for(int i=0;i<s.size();i++)
    {
        if(s[i]!=' ')
            temp1=temp1+s[i];

    }
    color
    cout<<s;
    return 0;
}
