#include <bits/stdc++.h>
using namespace std;
string revert(string s)
{
    for(int i=0;i<s.size();i++)
    {
        if(s[i]>='A' && s[i]<='Z')
        s[i]=s[i]+32;
    }
    return s;
}
string s,k;
int main()
{
    freopen("TWOSTRING.INP","r",stdin);
    freopen("TWOSTRING.OUT","w",stdout);
    cin>>s>>k;
    if(s==k)
    {
        cout<<1;
        return 0;
    }
    else 
    {
        if(revert(s)==revert(k))
        {
            cout<<2;
            return 0;
        }
    }
    cout<<3;
    
}