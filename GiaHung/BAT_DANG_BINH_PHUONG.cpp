#include <bits/stdc++.h>

using namespace std;

int main()
{
    freopen("BAT_DANG_BINH_PHUONG.inp","r",stdin);
    freopen("BAT_DANG_BINH_PHUONG.out","w",stdout);
    int a,b,c;
    cin>>a>>b>>c;
    a=a*a;
    b=b*b;
    c=c*c;
    if(a+b<c) cout<<"YES";
    else cout<<"NO";
    return 0;
}
