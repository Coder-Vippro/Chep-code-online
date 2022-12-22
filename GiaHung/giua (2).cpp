#include <bits/stdc++.h>

using namespace std;

int main()
{
    freopen ("GIUA.inp","r",stdin);
    freopen ("GIUA.out","w",stdout);
    long long a,b,c;
    cin>>a>>b>>c;
    if (a<=b && a>=c || a>=b && a<=c) cout<<a;
    else if (b<=c && b>=a || b>=c && b<=a) cout<<b;
    else if (c<=b && c>=a || c>=b && c<=a) cout<<c;
    return 0;
}
