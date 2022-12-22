#include <bits/stdc++.h>
#define N int (1e7)
using namespace std;
int p[N+2];
void sangngto (int n)
{
    for(int i=2;i<=N;i++)p[i]=i;
    for(int i=2;i*i<=N;i++)
    {
        if(p[i]==i)
        for(int j=2;i*j<=N;j++)
        {
            if(p[i*j]==i*j)p[i*j]=i;
        }
    }
}
long long LT(int n,int k)
{
    long long ans=1;
    for(int i=1;i<=k;i++)
    {
        ans=ans*n;
    }
    return ans;
}
int tonguoc(int n)
{
    int s=1;
    while(n>1)
    {
        int x=p[n];
        int mu=0;
        while(n%x==0)
        {
            mu++;
            n=n/x;
        }
        s=s*(LT(x,mu+1)-1)/(x-1);
    }
    return s;

    
}
int main()
{
    //freopen("QUASI.INP","r",stdin);
    //freopen("QUASI.OUT","w",stdout);
    int n,k;
    cin>>n>>k;
    int dem=0;
    sangngto(100001);
    for(int i=1;i<=n;i++)
    {
        if(abs(i-tonguoc(i))<=k)
        {
            dem++;
        }
    }
    cout<<dem;
}
