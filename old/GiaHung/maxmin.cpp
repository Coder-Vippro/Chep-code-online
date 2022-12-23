#include <bits/stdc++.h>
using namespace std;
int main()
{
   freopen("maxmin.inp","r",stdin);
   freopen("maxmin.out","w",stdout);
    int n,so[1000];
    cin>>n;
    for (int i=0;i<n;i++)cin>>so[i];
    sort(so,so+n);
    cout<<so[0]+so[n-1]<<endl;
    for (int i=0;i<n;i++)cout<<so[i]<<" ";
    return 0;
}
