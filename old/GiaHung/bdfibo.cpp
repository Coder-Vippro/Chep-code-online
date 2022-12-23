#include <bits/stdc++.h>

using namespace std;

int main()
{
    freopen("bdfibo.inp","r",stdin);
    freopen("bdfibo.out","w",stdout);
    long long n,d=0,t=0,m,f[50],luu[50];
    cin>>n;
    f[1]=1;
    f[2]=1;
    for(int i=3;i<=45;i++)
    {
        f[i]=f[i-1]+f[i-2];
        if(f[i]>n)
        {
            m=i-1;
            break;
        }
    }
    t=t+f[m];luu[1]=m;
    if(t==n)d++;
    else
    {
        d++;
        while(t!=n)
    {
        for(int i=m-1;i>=1;i--)
        {
            if(t+f[i]<=n)
            {
                t=t+f[i];
                d++;
                luu[d]=i;
                m=i;
                break;
            }
        }
    }
    }
    cout<<d<<endl;
    for(int i=d;i>=1;i--)cout<<luu[i]<<" ";
    return 0;
}
