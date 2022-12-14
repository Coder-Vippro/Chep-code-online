#include <bits/stdc++.h>

using namespace std;

int main()
{
    freopen ("MIN.inp","r",stdin);
    freopen ("MIN.out","w",stdout);
    long long a,b,c;
    cin>>a>>b>>c;
    if (a<=b && a<=c) cout<<a;
    else if (b<=c && b<=a) cout<<b;
    else cout<<c;
    return 0;
}
