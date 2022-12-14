#include <bits/stdc++.h>
using namespace std;
int main()
{
    freopen("KHUYENMAI.inp","r",stdin);
    freopen("KHUYENMAI.out","w",stdout);
    long long a,b,giam,t;
    cin>>a>>b;
    t=a*b;
    giam=t/10;
    if(t>= 1000000)cout<<t-giam;
    else cout<<t;
}
