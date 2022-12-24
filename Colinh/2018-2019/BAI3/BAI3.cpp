#include <iostream>
#include <cstdio>
#include <algorithm>
#include <cmath>
using namespace std;
long long a,b,c;
int main()
{
    freopen("BAI3.INP","r",stdin);
    freopen("BAI3.OUT","w",stdout);
    cin>>a>>b>>c;
    long long k=__gcd(a,b);
    cout<<__gcd(k,c)<<' '<<a*b*c/__gcd(k,c);
}