#include <bits/stdc++.h>
using namespace std;
int main()
{
    freopen("CHANLE.inp","r",stdin);
    freopen("CHANLE.out","w",stdout);
    int a[10000],n,b;
    cin>>n;
    for(int i=0;i<n;i++) cin>>a[i];
    for(int i=0;i<n;i++)
        if(a[i]%2==0) cout<<a[i]<<" ";
        for(int i=0;i<n;i++)
        if(a[i]%2!=0) cout<<a[i]<<" ";
    return 0;
}
