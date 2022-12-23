#include <bits/stdc++.h>

using namespace std;
int m[25];
int main()
{
    freopen("XAU16.inp","r",stdin);
    freopen("XAU16.out","w",stdout);
    memset(m,0,sizeof(m));
    string s;
    cin>>s;
    for(int i=0;i<s.size();i++)
    {
        if(s[i]<='z'&&s[i]>='a')
            m[s[i]-97]++;
        if(s[i]<='Z'&&s[i]>='A')
            m[s[i]-65]++;
    }
    for(int i=0;i<=25;i++)
    {
        if(m[i]>0)
            cout<<char(i+65)<<' '<<n[i]<<'\n';
    }
    return 0;
}
