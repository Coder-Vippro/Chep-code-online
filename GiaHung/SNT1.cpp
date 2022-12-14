#include <bits/stdc++.h>

using namespace std;
int n,f[1000001],p[1000001],snt[1000001],t=0;
int main()
{
    cin>>n;
    f[1]=0;
    f[0]=0;
    for(int i=2;i<=1000000;i++)
    {
        f[i]=1;
        p[i]=1;
        snt[i]=1;
    }
    for(int i=2;i<=1000000;i++)
    {
        if(f[i]==1)
        {
        if(f[i]==1)
            for(int j=2;j*i<=1000000;j++)
            f[i*j]=0;
        }
    }
    int k=1;
    for(int i=2;i<=1000000;i++)
    {
        if(f[i]==1)
        {
            p[k]=i;
            k++;
        }
    }
    int s1=1;
    for(int i=1;i<=k;i++)
    {
        if(f[i]==1)
        {
           snt[s1]=p[i];+
           s1++;
        }
    }
    cout<<snt[n];
    return 0;
}
