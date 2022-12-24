#include <bits/stdc++.h>
#define N int (1e7)
using namespace std;
int p[N+2];
int n;
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
    while (n>0)
    {
        tong=tong+n%10;
        n=n/10;
    }
    return tong;
    
}
int main()
{
    freopen("TCSNT.INP","r",stdin);
    freopen("TCSNT.OUT","w",stdout);
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
    int n;
    cin>>n;
    int tong=0;
    sangngto(n);
    for(int i=2;i<=n;i++)
    {
        if (p[i]==1)
        {
            tong=tong+tcs(i);
        } 
    }
    cout<<tong;
    return 0;
}