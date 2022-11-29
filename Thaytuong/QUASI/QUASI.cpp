#include <bits/stdc++.h>
#define N int (1e7)
using namespace std;
int p[N+2];
void sangngto (int n)
{
    fill(p,p+n+1,1);
    p[0]=p[1]=0;
    for(int i=2;i*i<=n;i++)
    {
        if(p[i]==1)
        for(int j=i*i;j<=n;j+=i) p[j]=0;
    }
}
long long LT(int n, int k)
{
    while(k--)
    {
        n=n*n;
    }
    return n;
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
            n/=x;
        }
        s=s*(LT(x,mu+1)-1)/(x-1);
    }
    return s;
}
int main()
{
    freopen("QUASI.INP","r",stdin);
    freopen("QUASI.OUT","w",stdout);
    int n,k;
    cin>>n>>k;
    int dem=0;
    for(int i=1;i<=n;i++)
    {
        if(i-tonguoc(i)<=k)
        {
            cout<<i<<' ';
            dem++;
        }
    }
    cout<<dem;
}
