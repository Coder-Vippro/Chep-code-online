#include <bits/stdc++.h>

using namespace std;
int a[10000];
int main()
{
    freopen("GHEP_SO.inp","r",stdin);
    freopen("GHEP_SO.out","w",stdout);
    int n;
    cin>>n;
    for(int i=1;i<=n;i++)cin>>a[i];
   sort(a,a[1],a[n]);
   for(int i=1;i<=n;i++)cout<<a[i];
    return 0;
}
