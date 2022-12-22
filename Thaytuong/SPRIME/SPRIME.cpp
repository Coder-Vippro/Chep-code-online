#include <bits/stdc++.h>
#define N int (1e7)
using namespace std;
int p[N+2];
int n;
int f[3000001];
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
int tcs(int n)
{
    int tong=0;
    while(n>0)
    {
        tong=tong+n%10;
        n=n/10;
    }
    return tong;
}
int main()
{
    freopen("SPRIME.INP","r",stdin);
    freopen("SPRIME.OUT","w",stdout);
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
    sangngto(3000000);
    f[1]=0;
    for(int i=2;i<=3000000;i++)
    {
        if(p[i]==1 && tcs(i)%5==0)
        {
            f[i]=f[i-1]+1;
        }
        else f[i]=f[i-1];
    }
    cin>>n;
    int d,y;
    while(n--)
    {
        cin>>d>>y;
        cout<<f[y]-f[d-1]<<'\n';
    }

}
