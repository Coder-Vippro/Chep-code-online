0#include <bits/stdc++.h>
using namespace std;
int main()
{
    freopen("maxpro.inp","r",stdin);
    freopen("maxpro.out","w",stdout);
    long long a,b,c,M;
    cin>>a>>b>>c>>M;
    if((a*b)>(b*c)&&(a*b)>(a*c))cout<<(a*b)%M;
    if((a*c)>(b*c)&&(a*c)>(a*b))cout<<(a*c)%M;
    if((b*c)>(a*b)&&(b*c)>(a*c))cout<<(a*b)%M;
    return 0;
}
