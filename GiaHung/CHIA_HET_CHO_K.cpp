#include <bits/stdc++.h>
using namespace std;
int main()
{
    freopen("CHIA_HET_CHO_K.inp","r",stdin);
    freopen("CHIA_HET_CHO_K.out","w",stdout);
    int n,k;
    cin>>n>>k;
    int a[n],s=0;
    for(int i=0;i<n;i++)cin>>a[i];
    for(int i=0;i<n-1;i++)
        for(int j=i+1;j<n;j++)
        if((a[i]+a[j])%k==0)s++;
    cout<<s;
    return 0;
}

