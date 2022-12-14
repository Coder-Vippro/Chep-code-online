#include <bits/stdc++.h>

using namespace std;

int main()
{
    freopen("tong.inp","r",stdin);
    freopen("tong.out","w",stdout);
    long long n,s=0;
    cin>>n;
    for(long long i=1;i<=n;i++)
    s=s+i*i*i;
    cout<<s;
    return 0;
}
