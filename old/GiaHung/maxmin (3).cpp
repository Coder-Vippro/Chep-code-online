#include <bits/stdc++.h>
using namespace std;
int main()
{
   freopen("maxmin.inp","r",stdin);
   freopen("maxmin.out","w",stdout);
    int n,so[1000],maxn,minn,o,s[1000];
    cin>>n>>so[1];
    maxn=so[1];
    minn=so[1];
    s[1]=so[1];
    for (int i=2;i<=n;i++)
      {
          cin>>so[i];
          if(so[i]>maxn)maxn=so[i];
          if(so[i]<minn)minn=so[i];
          so[i]=s[i];
      }
    cout<<maxn+minn;
    for (int i=1;i<n;i++)
      {
for (int i=1;i<n;i++)
      {
          cin>>s[i];
          if(s[i+1]<s[i]){
            s[i]=o;
            s[i]=s[i+1];
            s[i+1]=o;
          }
      }
      }
      for (int i=1;i<=n;i++)
      {
          cout<<s[i];
      }
}
