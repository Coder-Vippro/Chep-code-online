#include <bits/stdc++.h>

using namespace std;

int main()
{
    freopen("MAXMOD.inp","r",stdin);
    freopen("MAXMOD.out","w",stdout);
    long long x,y,n;
    cin>>x>>y>>n;
    long long du=n%x;
    du=du-y;
    if(du<0) du+=x;
    cout<<n-du;
    return 0;
}