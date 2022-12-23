#include <bits/stdc++.h>
using namespace std;
int main()
{
    freopen("PIZZA.inp","r",stdin);
    freopen("PIZZA.out","w",stdout);
    long long a,b,c,x,y;
    cin>>a>>b>>c>>x>>y;
    long long d=x*a+y*b,e=0;
    if(x==y) {
        e=min(d, c*2*x);
    }
    else e=min(c*x+(y-x)*a, d);
    cout<<e;
    return 0;
}
