#include <bits/stdc++.h>

using namespace std;

int main()
{
    freopen("KMIN.inp","r",stdin);
    freopen("KMIN.out","w",stdout);
    long long k,n,s;
    k=0,s=0;
    cin>>n;
while (s<=n)
{
    k++;
    s=s+k;
}
cout<<k-1;
 return 0;
}
