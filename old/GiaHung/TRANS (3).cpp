#include <bits/stdc++.h>
using namespace std;
int main()
{
    freopen("trans.inp","r",stdin);
    freopen("trans.out","w",stdout);
    long long n,a,b,t=0;
    cin>>n>>a>>b;
    if(n%50>0)
    {
        if(n%50%4!=0)t=n%50/4+1;
        else t=n%50/4;
    }
    if(t*b>=a)cout<<n/50+1<<" "<<0;
    else cout<<n/50<<" "<<t;
    return 0;
}
