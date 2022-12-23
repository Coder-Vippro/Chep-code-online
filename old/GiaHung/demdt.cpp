#include <bits/stdc++.h>

using namespace std;

int main()
{
    freopen("demdt.inp","r",stdin);
    freopen("demdt.out","w",stdout);
    long long n,m;
    cin>>n,m;
    cout<<n*(n-1)/2-m*(m-1)/2+1;
    return 0;
}
