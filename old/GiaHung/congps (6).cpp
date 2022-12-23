#include <bits/stdc++.h>
using namespace std;
int main()
{
    freopen("congps.inp","r",stdin);
    freopen("congps.out","w",stdout);
    int a,b,c,d,ts,ms,ucln;
    cin>>a>>b>>c>>d;
    ts=a*d+b*c;
    ms=b*d;
    ucln=__gcd(ts,ms);
    cout<<a<<"/"<<b<<"+"<<c<<"/"<<d<<"="<<ts/ucln<<"/"<<ms/ucln;
    return 0;
}
