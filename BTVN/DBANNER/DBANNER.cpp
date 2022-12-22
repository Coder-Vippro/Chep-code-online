#include<bits/stdc++.h>
using namespace std;
int h[1003]; 
int n, smax=0;
int main()
{
    //freopen("DBANNER.INP","r",stdin);
    //freopen("DBANNER.OUT","w",stdout);
    cin>>n;
    for(int i=1;i<=n;i++)cin>>h[i];
    for(int i=1;i<=n;i++)
    {
        int j,k;
        for(j=i-1;j>=0;j--)
        if(h[j]<h[i])break;
        for(k=j-1;k<=n;k++)
        if(h[k]<h[j])break;
        smax=max(smax,h[i]*(k-j-1));
    }
    cout<<smax;
}