#include <bits/stdc++.h>
using namespace std;
int main()
{
    freopen("kmin.inp","r",stdin);
    freopen("kmin.out","w",stdout);
    long long n,k=0,s=0;
    cin>>n;
    while (s<=n)
    {
        k++;
        s=s+k;
    }
    cout<<k-1;
    return 0;
}
