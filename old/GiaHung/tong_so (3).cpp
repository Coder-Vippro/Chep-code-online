#include <bits/stdc++.h>

using namespace std;

int main()
{
    freopen("tong_so.inp","r",stdin);
    freopen("tong_so.out","w",stdout);
    int a,b,c;
    cin>>a>>b>>c;
    if(a+b==c) cout<<1;
    else if(a+c==b) cout<<1;
    else if(b+c==a) cout<<1;
    else cout<<0;
    return 0;
}
