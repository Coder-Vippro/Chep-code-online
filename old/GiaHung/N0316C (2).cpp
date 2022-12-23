#include <bits/stdc++.h>
using namespace std;
int main()
{
    freopen("N0316C.inp","r",stdin);
    freopen("N0316C.out","w",stdout);
      long long n; long long f[1000];
      cin>>n;
      f[1]=f[2]=1;
      for (int i=3;i<=n;i++) {
         f[i]=f[i-1]+f[i-2];
      }
      cout<<f[n];
}
