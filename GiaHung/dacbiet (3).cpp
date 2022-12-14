#include <bits/stdc++.h>
using namespace std;
int main()
{
    freopen("dacbiet.inp","r",stdin);
    freopen("dacbiet.out","w",stdout);
    long long n,tong=0,s;
    cin>>n;
    s=n;
    while (s != 0) {
        tong += s % 10;
        s /= 10;
    }
    if(n%tong==0) cout<<1;else cout<<0;
    return 0;
}

