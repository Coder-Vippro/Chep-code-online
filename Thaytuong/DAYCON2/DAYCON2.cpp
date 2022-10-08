#include <bits/stdc++.h>

using namespace std;
int a[100001];
int f[100001];
int maxx=0;
int vt;
int main()
{
    //freopen("DAYCON2.INP","r",stdin);
    //freopen("DAYCON2.OUT","w",stdout);
    long long n;
    long long k;
    n=1;
    while(cin>>k)
    {
        a[n]=k;
        n++;
    }
    f[1]=1;
    for(int i=2;i<=n;i++)
    {
        maxx=0;
        for(int j=1;j<=i;j++)
        {
            if(a[i]>=a[j])
            {
                if(maxx<f[j])
                    maxx=f[j];
            }
        }
        f[i]=maxx+1;
    }
    int kq=f[1];
    for(int i=2;i<=n;i++)
    {
        if(kq<f[i])
            {
                kq=f[i];
                vt=i;
            }
    }
    cout<<kq<<'\n';

    for(int i=kq-1;i>0;i--)
    {
        for(int i=vt-1;i>0;i--)
        {
            vt=i;
            f[vt]=-f[vt];
        }
    }
    for(int i=1;i<=n;i++)
    {
        if(f[i]<0)
        {
            cout<<a[i]<<" ";
        }
    }
    return 0;
}
