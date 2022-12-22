#include <bits/stdc++.h>

using namespace std;

int main()
{
    freopen("KSO.inp","r",stdin);
    freopen("KSO.out","w",stdout);
    long long k,n,s;
    k=2,s=0;
    cin>>n;
while (s<=n)
{
    s=s+k*k;
    cout<<k-1<<" ";
    k++;
}
 return 0;
}
