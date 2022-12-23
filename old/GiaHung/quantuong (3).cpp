#include <bits/stdc++.h>s

using namespace std;

int main()
{
    freopen("quantuong.inp","r",stdin);
    freopen("quantuong.out","w",stdout);
    int c1,d1,c2,d2,a,b;
    cin>>c1>>d1>>c2>>d2;
    if(c1>c2) a=c1-c2;
    else a=c2-c1;
    if(d1>d2) b=d1-d2;
    else b=d2-d1;
    if(a==b) cout<<"YES";
    else cout<<"NO";
    return 0;
}
