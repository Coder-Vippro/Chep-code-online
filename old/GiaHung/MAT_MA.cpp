#include <bits/stdc++.h>

using namespace std;

int main()
{    freopen("MAT_MA.inp","r",stdin);
     freopen("MAT_MA.out","w",stdout);
     int n,a,b,d=1;
     cin>>n>>a;
      for(int i=2;i<=n;i++){
     cin>>b;
      if(b==a) d++;
       }
       if(d==n) cout<<n;else cout<<1;
              return 0;

}
