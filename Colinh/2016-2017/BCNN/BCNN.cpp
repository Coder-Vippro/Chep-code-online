#include <bits/stdc++.h>
using namespace std;
int a,b;
int main()
{
    freopen("BCNN.INP","r",stdin);
    freopen("BCNN.OUT","w",stdout);
    cin>>a>>b;
    cout<<a*b/__gcd(a,b);
    return 0;
}
