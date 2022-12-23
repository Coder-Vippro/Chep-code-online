#include <bits/stdc++.h>

using namespace std;
int C(int k, int n) {
    if (k == 0 || k == n) return 1;
    if (k == 1) return n;
    return C(k - 1, n - 1) + C(k, n - 1);
}
int main()
{
    //freopen("Tinhtoan.inp","r",stdin);
    //freopen("Tinhtoan.out","w",stdout);
    int k,n,p;
    cin>>k>>n>>p;
    cout<<C(k,n)%p;
    return 0;
}
