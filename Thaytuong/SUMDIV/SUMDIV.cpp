#include <bits/stdc++.h>
using namespace std;
const int N=1e7;
long long p[N+5];
long long f[N+5];
long long A[N+5];
long long n,t,x,y;
int main()
{
    freopen("SUMDIV.INP","r",stdin);
    freopen("SUMDIV.OUT","w",stdout);
    cin>>n>>t;
    for(int i=1;i<=n;i++)cin>>A[i];
    for(int i=1;i<=N;i++)p[i]=i;
    for(int i=2;i*i<=N;i++)
    {
        if(p[i]==i)
        for(int j=2;i*j<=N;j++)
        {
            if(p[i*j]==i*j)p[i*j]=i;
        }
    }
    f[1]=1+p[A[1]];
    for(int i=2;i<=n;i++)
    {
        f[i]=f[i-1]+p[A[i]]+1;
    }
    while(t--)
    {
        cin>>x>>y;
        cout<<f[y]-f[x-1]<<endl;
    }
    
}