#include <bits/stdc++.h>

using namespace std;

int main()
{
    freopen("tinhtong.inp","r",stdin);
    freopen("tinhtong.out","w",stdout);
    double a,b;
    int aa,bb;
    cin>>a>>b;
    aa=int(a);
    if(a>aa)aa++;
    bb=int(b);
    cout<<(aa+bb)*(bb-aa+1)/2;
    return 0;
}
