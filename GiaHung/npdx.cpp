#include <bits/stdc++.h>

using namespace std;
bool dxnp(int n)
{
    string s="";
    while(n!=0)
    {
        s=char(n%2+48)+s;
        n=n/2;
    }
    for(int i=0;i<(s.length()+1)/2;i++)
        if(s[i]!=s[s.length()-i-1])return false;
    return true;
}
int main()
{
    freopen("npdx.inp","r",stdin);
    freopen("npdx.out","w",stdout);
    int n;
    cin>>n;
    if(dxnp(n))cout<<"YES";
    else cout<<"NO";
    return 0;
}
