#include <bits/stdc++.h>
using namespace std;
int main()
{
    freopen("trongcay.inp","r",stdin);
    freopen("trongcay.out","w",stdout);
    long long x,y,z,kc;
    cin>>x>>y>>z;
    kc=y+z;
    x=x*1000-kc;
    if(x<kc)cout<<0;
    else cout<<x/kc;
    return 0;
}
