#include <bits/stdc++.h>
using namespace std;
long long n,a[21];
int main()
{
 freopen("SXCHON.inp","r",stdin);
 freopen("SXCHON.out","w",stdout);
 cin>>n;
 for(int i=1;i<=n;i++)cin>>a[i];
 for(int i=1;i<n;i++){
    int vt=i;
    for(int j=vt+1;j<=n;j++)if(a[j]<a[vt])vt=j;
    swap(a[i],a[vt]);
    for(int j=1;j<=n;j++)if(j==vt||j==i)cout<<'['<<a[j]<<']'<<" ";
    else cout<<a[j]<<" ";
    cout<<'\n';
 }
 return 0;
}
