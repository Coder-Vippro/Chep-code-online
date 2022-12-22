#include <bits/stdc++.h>

using namespace std;

int main()
{   freopen("donuoc.inp","r",stdin);
freopen("donuoc.out","w",stdout);
    long long x,y,z,k=2,n;

    cin>>x>>y>>z;

for(k=2;k<z;k++)
    {
        n=2*y-x;
        x=y;
        y=n;

    }
   cout<<n;
    return 0;
}

