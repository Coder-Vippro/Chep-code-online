#include <bits/stdc++.h>

using namespace std;

int main()
{
    freopen("thudientu.inp","r",stdin);
    freopen("thudientu.out","w",stdout);
    int l,r,a;
    cin>>l>>r>>a;
    int t=abs(l-r),kq=min(l,r);
    kq=kq*2;
    if(a>=t)kq=kq+a+t;
    else kq=kq+2*a;
    if(kq%2>0)kq--;
    cout<<kq;
    return 0;
}
