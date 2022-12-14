#include <bits/stdc++.h>
using namespace std;
int main()
{
     freopen("THA_XUC_XAC.INP","r",stdin);
     freopen("THA_XUC_XAC.OUT","w",stdout);
     int n,t;
     cin>>t;
     for(int i=1;i<=t;i++)
     {
     cin>>n;
     if(n<4) cout<<1<<endl;
     else cout<<n/2<<endl;
     }
     return 0;
}
