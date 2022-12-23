#include <bits/stdc++.h>
using namespace std;
int main()
{
    //freopen("MAXX.INP","r",stdin);
    //freopen("MAXX.OUT","w",stdout);
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
    int n;
    cin>>n;
    string s;
    cin>>s;
    int dem=0;
    int maxx;
    if(s[1]=='I')
    {
        maxx=1;
    }
    else {maxx=-1;}
    for(int i=0;i<=n;i++)
    {
        if(s[i]=='I')
        dem++;
        else if(s[i]=='D') dem--;
        if(dem>maxx)
        maxx=dem;
    }
    cout<<maxx;
}