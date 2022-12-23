#include <bits/stdc++.h>
using namespace std;
int main()
{
    freopen("xoakiuc.inp","r",stdin);
    freopen("xoakiuc.out","w",stdout);
    string s;
    getline(cin,s);
    for(int i=0;i<s.length();i++)
    {
        if(s[i]=='e'&&s[i+1]=='m') s.erase(i,2);
    }
    cout<<s;
    return 0;
}
