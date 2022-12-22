#include <bits/stdc++.h>
using namespace std;

long long tong,s,ok,x,y,k;
long i,j,n,a[10000],b[10000];

int main()
{
    freopen("Bai10.inp","r",stdin);
    freopen("Bai10.out","w",stdout);
    cin>>n;
    for(i=1;i<=n;i++)
    {
        cin>>a[i];
        tong=tong+a[i];
    }
    s=tong/2;

    for(i=1;i<=s;i++)
        b[i]=0;

    b[0]=1;
    for(i=1;i<=n;i++)
        for(j=s;j>=a[i];j--)
    {
        if((b[j]==0)&&b[j-a[i]]==1) b[j]=1;
    }

     for(i=s;s>=1;i--) if(b[i]==1) {ok=i;break;}
     x=ok; y=tong-ok;
     k=abs(x-y);
     cout<<k;
}
