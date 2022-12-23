#include <bits/stdc++.h>

using namespace std;

int main()
{
    freopen("TBG.inp","r",stdin);
    freopen("TBG.out","w",stdout);
    long long x,y,z;
    cin>>x>>y>>z;
    long long time=int((x*z-1)/y)*y+y;
    cout<<(time-y*z)/y;
    return 0;
}