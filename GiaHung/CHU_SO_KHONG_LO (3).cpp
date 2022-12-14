#include <bits/stdc++.h>

using namespace std;

int main()
{
    freopen("CHU_SO_KHONG_LO.inp","r",stdin);
    freopen("CHU_SO_KHONG_LO.out","w",stdout);
    int a,b,c,d;
    cin>>a>>b;
    c=a/100+a%100/10+a%10;
    d=b/100+b%100/10+b%10;
    if(c>d) cout<<c;
    else cout<<d;
    return 0;
}
