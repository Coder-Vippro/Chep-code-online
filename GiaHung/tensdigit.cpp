#include <bits/stdc++.h>

using namespace std;

int main()
{
    freopen("tensdigit.inp","r",stdin);
    freopen("tensdigit.out","w",stdout);
    int n,hc;
    cin>>n;
    hc=(n/10)%10;
    if (n<10) cout<<"-1";
    else cout<<hc;
    return 0;
}
