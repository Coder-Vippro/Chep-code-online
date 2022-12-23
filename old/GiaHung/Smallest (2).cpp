#include <bits/stdc++.h>
using namespace std;
int main()
{
    freopen("Smallest.inp","r",stdin);
    freopen("Smallest.out","w",stdout);
    int n,k,du;
    cin>>n>>k;
    du=n%k;
    du=k-du;
    cout<<n+du;
    return 0;
}

