#include <bits/stdc++.h>
using namespace std;
int main()
{
    freopen("money.inp","r",stdin);
    freopen("money.out","w",stdout);
    double a,b,c,lai;
    cin>>a>>b>>c;
    int t=0;
    while(a<c)
     {
        lai=a*b/100;
        a=a+lai;
        t++;
     }
    cout<<t;
    return 0;
}
