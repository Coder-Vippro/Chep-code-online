#include <bits/stdc++.h>
using namespace std;
int main() {
    freopen("KTCP.inp","r",stdin);
    freopen("KTCP.out","w",stdout);
    long long n,can;
    cin >> n;
    can=sqrt(n);
    if (can*can == n) cout << "YES";
    else cout << "NO";
    return 0;
}