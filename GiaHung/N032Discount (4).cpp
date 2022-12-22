#include <bits/stdc++.h>
using namespace std;
int main()
{
    freopen("N032Discount.inp","r",stdin);
    freopen("N032Discount.out","w",stdout);
    float a,b,s,t;
    cin>>a>>b;
    s=a*b;
    t=s/100*10;
    if(s<=1000) cout << fixed << setprecision(4)<<s;
    else cout << fixed << setprecision(4)<<s-t;
    return 0;
}
