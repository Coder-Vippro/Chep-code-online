#include <bits/stdc++.h>

using namespace std;

int main()
{
    freopen("diemthi.inp","r",stdin);
    freopen("diemthi.inp","w",stdout);
    double a,b,c;
    cin>>a>>b>>c;
    if(a+b+c>10) cout<<fixed<<setprecision(i)<<a+b+c<<" "<<a+b+c/3<<"1";
     else cout<<fixed<< setprecision(i)<<a+b+c<<" "<<a+b+c/3<<"0";
    return 0;
}
