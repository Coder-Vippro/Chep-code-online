#include <bits/stdc++.h>
using namespace std;
int main()
{
     freopen("THA_XUC_XAC.inp","r",stdin);
     freopen("THA_XUC_XAC.out","w",stdout);
     int n,t,sl;
     cin>>t;
     for(int i=1;i<=t;i++)
     {
     cin>>n;
     if(n<4) cout<<1<<endl;else cout<<n/2<<endl;
     }
     return 0;
}
