#include <bits/stdc++.h>

using namespace std;

int main()
{
    freopen("MAT_MA.INP","r",stdin);
    freopen("MAT_MA.OUT","w",stdout);
     int n,a,k;
     int dem=1;
     cin>>n>>a;
      for(int i=2;i<=n;i++)
        {
         cin>>k;
         if(k==a)
         dem++;
       }
       if(dem==n) cout<<n;
       else cout<<1;
  return 0;

}
