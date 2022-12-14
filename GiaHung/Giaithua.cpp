#include <bits/stdc++.h>
#define ll long long
int n;
using namespace std;
ll Giaithua(ll n)
{
    ll gt=1;
    for(ll i=2; i<=n; i++)
        gt =gt*i;
    return gt;
}
int main()
{
    freopen("Giaithua.inp","r",stdin);
    freopen("Giaithua.out","w",stdout);
    cin >> n;
    cout << Giaithua(n);
    return 0;
}
