#include <bits/stdc++.h>
using namespace std;
int a,b,c;
int main()
{
    freopen("ONTAP18.INP","r",stdin);
    freopen("ONTAP18.OUT","w",stdout);
    cin>>a>>b>>c;
    cout<<gcd(c,__gcd(a,b))<<' '<<c/__gcd(c,a*b/__gcd(a,b));
}