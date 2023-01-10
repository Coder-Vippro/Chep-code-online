#include <bits/stdc++.h>

using namespace std;
int a[100001];
int f[100001];
int maxx=0;
int vt;
int main()
{
    freopen("DAYCONTD.INP","r",stdin);
    freopen("DAYCONTD.OUT","w",stdout);
    long long n;
    cin>>n;
    for(int i=1;i<=n;i++)
    {
        cin>>a[i];
    }
    f[1]=1;
    maxx=0;
    for(int i=2;i<=n;i++)
    {
        for(int j=1;j<=i;j++)
        {
                if(maxx<f[j]a[i]==a[j]+2)
                    maxx=f[j];
        }

        f[i]=maxx+1;
    }
    int kq=f[1];
    for(int i=1;i<=n;i++)
    {
        if(kq<f[i])
            {
                kq=f[i];
                vt=i;
            }
    }
    for(int i=kq-1;i>=1;i--)
    {
        for(int j=vt-1;j>=1;j--)
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
