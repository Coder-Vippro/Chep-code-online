#include <bits/stdc++.h>
using namespace std;
int main()
{
    freopen("BAI60522.inp","r",stdin);
    freopen("BAI60522.out","w",stdout);
   int n,m=1;
    cin>>n;
    int a[n],s=0;
    for(int i=0;i<n;i++)cin>>a[i];
    for(int i=0;i<n-1;i++)
        for(int j=i+1;j<n;j++)
        if(a[i]!=a[j])m=max(m,a[i]*a[j]);
    cout<<m;
    return 0;
}

