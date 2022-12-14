#include <bits/stdc++.h>

using namespace std;

int main()
{
    freopen ("MAX.inp","r",stdin);
    freopen ("MAX.out","w",stdout);
    long long a,b,c;
    cin>>a>>b>>c;
    if (a>=b && a>=c) cout<<a;
    else if (b>=c && b>=a) cout<<b;
    else cout<<c;
    return 0;
}
