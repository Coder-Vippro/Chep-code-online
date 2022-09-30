#include <bits/stdc++.h>

using namespace std;
int a[100001];
int f[100001];
int maxx=0;
int vt;
int main()
{
    //freopen("TANGDAN.INP","r",stdin);
    //freopen("TANGDAN.OUT","w",stdout);
    long long n;
    cin>>n;
    for(int i=1;i<=n;i++)cin>>a[i];
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
    cout<<kq;

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
