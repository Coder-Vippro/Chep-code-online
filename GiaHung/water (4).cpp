#include <bits/stdc++.h>
using namespace std;
int main()
{
    freopen("Water.inp","r",stdin);
    freopen("Water.out","w",stdout);
    long long a,b,c,h1,h2;
    cin>>a>>b>>c;
    h1=abs(a-b);
    h2=abs(b-c);
    if(h1>h2) cout<<h1;else cout<<h2;
    return 0;
}
