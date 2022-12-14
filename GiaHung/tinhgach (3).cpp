#include <bits/stdc++.h>
using namespace std;
int main()
{
    freopen("tinhgach.inp","r",stdin);
    freopen("tinhgach.out","w",stdout);
    long long x,y,z,t;
    cin>>x>>y>>z>>t;
    int s=2*x*y+ 2*y*z+(t-z)*y;
    cout<<s*39;
    return 0;
}
