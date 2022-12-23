#include <bits/stdc++.h>

using namespace std;

int main()
{
    freopen("CHIA_DOI.inp","r",stdin);
    freopen("CHIA_DOI.out","w",stdout);
    int n,m,s;
    cin>>n>>m;
    cout<<__gcd(n,m)<<endl<<n/__gcd(n,m)<<" "<<m/__gcd(n,m);
    return 0;
}
