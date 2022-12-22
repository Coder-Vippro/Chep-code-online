#include <bits/stdc++.h>

using namespace std;

int main()
{
    freopen ("TONGMIN.inp","r",stdin);
    freopen ("TONGMIN.out","w",stdout);
    long long a,b,c;
    cin>>a>>b>>c;
    if (a<=b && a<=c && b<=c) cout<<a+b;
    else if (a<=b && a<=c && c<=b) cout<<a+c;
    else if (b<=c && b<=a || a<=c ) cout<<b+a;
    else if (b<=c && b<=a || c<=a ) cout<<b+c;
    else if (c<=b && c>=a || b<=a) cout<<c+b;
    else if (c<=b && c>=a || a<=b) cout<<c+a;
    return 0;
}
