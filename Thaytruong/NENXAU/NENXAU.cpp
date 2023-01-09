#include <bits/stdc++.h>

using namespace std;
string s;
string k="";
int kt(char s, string k)
{
    int dem=0;
    for(int i=0;i<k.size();i++)
    {
        if(k[i]==s)
            dem++;
    }
    return dem;
}
int main()
{
    freopen("NENXAU.INP","r",stdin);
    freopen("NENXAU.OUT","w",stdout);
    getline(cin,s);
    for(int i=0;i<s.size();i++)
    {
        if(s[i]>='A' && s[i]<='Z')
        {
            k=k+s[i];
        }
    }
    cout<<k<<'\n';
    for(char i='A';i<='Z';i++)
    {
        if(kt(i,s)>0)
        {
            cout<<i<<kt(i,s);
        }
    }
    return 0;
}
