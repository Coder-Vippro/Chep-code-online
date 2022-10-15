#include <bits/stdc++.h>

using namespace std;
string s;
long long maxx=1;
long long dem=1;
int main()
{
    freopen("LAPLAI.INP","r",stdin);
    freopen("LAPLAI.OUT","w",stdout);
    cin>>s;
    for(int i=1;i<s.size();i++)
    {
        if(s[i]==s[i-1])
        {
            dem++;
        }
        if(dem>maxx)
        {
            maxx=dem;
        }
        if(s[i]!=s[i-1])
        {
            dem=1;
        }
    }
    cout<<maxx;
    return 0;
}
