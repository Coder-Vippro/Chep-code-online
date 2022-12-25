#include <bits/stdc++.h>
#define N int (1e7)
using namespace std;
int p[N+5];
void sangnt(int n)
{
    fill(p,p+n+1,1);
    p[0]=p[1]=0;
    for(int i=2;i*i<=n;i++)
    {
        if(p[i]==1)
        for(int j=i*i;j<=n;j+=i) p[j]=0;
    }
}
int n;
int t;
int A[100001],B[100001];
int k=1;
int main()
{
    freopen("kt07.INP","r",stdin);
    freopen("kt07.OUT","w",stdout);
    sangnt(1000001);
    cin>>n;
    for(int i=1;i<=1000001;i++)
    {
        if(p[i]==1 && p[i+6]==1)
        {
            A[k]=i;
            B[k]=i+6;
            k++;
        }
        if(k==10002)
        {
            break;
        }
    }
    while(n--)
    {
        cin>>t;
        cout<<A[t]<<' '<<B[t]<<'\n';
    }
    
}