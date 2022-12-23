#include <bits/stdc++.h>
using namespace std;
int a[1001],b[1001];
int main()
{
    freopen("ERASE.inp","r",stdin);
    freopen("ERASE.out","w",stdout);
    int n,sum=0,maxs=0;
    cin>>n;
    for(int i=1;i<=1000;i++)b[i]=0;
    for(int i=1;i<=n;i++){
            cin>>a[i];
            sum=sum+a[i];
            b[a[i]]++;
            }
    for(int i=1;i<=1000;i++)maxs=max(maxs,b[i]*i);
    cout<<sum-maxs;
    return 0;
}
