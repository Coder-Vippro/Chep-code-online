#include <bits/stdc++.h>
using namespace std;

int main()
{
    freopen("BAI1.inp","r",stdin);
   freopen("BAI1.out","w",stdout);
    long long a,b,c;
    long long x=min(a,min(b,c)),z=max(max(a,b),c),y=a+b+c-x-z;
    cin>>a>>b>>c;
    cout<<a*a*a-b*b+c<<'\n';
    cout<<x<<" "<<y<<" "<<z;
    return 0;
}
