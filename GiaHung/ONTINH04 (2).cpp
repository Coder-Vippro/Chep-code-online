#include <bits/stdc++.h>

using namespace std;
int n,f[1000001],p[1000001],snt[1000001],t=0;
int main()
{
    freopen("ONTINH04","r",stdin);
   freopen("ONTINH04","w",stdout);
    cin>>n;
    f[1]=false;
    f[0]=false;
    for(int i=2;i<=1000000;i++)
    {
        f[i]=true;
        p[i]=true;
        snt[i]=true;
    }
    for(int i=2;i<=1000000;i++)
    {
        if(f[i]==true)
        {
            for(int j=2;j*i<=1000000;j++)
            f[i*j]=false;
        }
    }
    int k=1;
    for(int i=2;i<=1000000;i++)
    {
        if(f[i]==true)
        {
            p[k]=i;
            k++;
        }
    }
    int s1=1;
    for(int i=1;i<=k;i++)
    {
        if(f[i]==true)
        {
           snt[s1]=p[i];
           s1++;
        }
    }
    cout<<snt[n];
    return 0;
}
