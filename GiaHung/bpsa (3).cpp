#include <bits/stdc++.h>

using namespace std;

int main()
{
    freopen("bpsa.inp","r",stdin);
    freopen("bpsa.out","w",stdout);
    int m,n,k;
    cin>>m>>n>>k;
    if(m>0)cout<<m*m*m<<" ";else cout<<(m)*(m)<<" ";
    if(n>0)cout<<n*n*n<<" ";else cout<<(n)*(n)<<" ";
    if(k>0)cout<<k*k*k<<" ";else cout<<(k)*(k)<<" ";
    return 0;
}
