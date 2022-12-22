#include <bits/stdc++.h>

using namespace std;

int main()
{
    freopen("CHINHPHUONG.inp","r",stdin);
    freopen("CHINHPHUONG.out","w",stdout);
    int a,b,a1,b1;
    cin>>a>>b;
    a1=sqrt(a);
    b1=sqrt(b);
    if(a1*a1==a) cout<<b1-a1+1;
    else cout<<b1-a1;
    return 0;
}
