#include <bits/stdc++.h>

using namespace std;
bool nt[1000000000];
long long gt(int n,int i)
{
    long long t=1;
    for(int j=1;j<=i;j++)t=t*n;
    return t;
}
bool snt(long long n)
{
    int so=0,d=0;
    while(n!=0)
    {
        so=n%10*gt(10,d)+so;
        if(nt[so]==false)return false;
        n=n/10;
    }
    return true;
}
int main()
{
    freopen("ssnt.inp","r",stdin);
    freopen("ssnt.out","w",stdout);
    long long n;
    cin>>n;
    n=gt(10,n);
    for(int i=2;i<n;i++)nt[i]=true;
    for(int i=2;i<n;i++)
        if(nt[i])
        {
            int tam=n/i;
            for(int j=2;j<tam;j++)nt[i*j]=false;
        }
    for(int i=n/10;i<n;i++)
    {
        if(nt[i]&&snt(i))cout<<i<<endl;
    }
    return 0;
}
