#include<bits/stdc++.h>
using namespace std;
int ss(string a,string b)
{
    int q=min(a.size(),b.size());
    for(long long i=0;i<q;i++)
    {
    if(a[i]>b[i]) return 1;
    if(a[i]<b[i])return 2;
    }
    return 1;
}
string a[10000001];
int main()
{
    freopen("GHEP_SO.inp","r",stdin);
    freopen("GHEP_SO.out","w",stdout);
    long long n;
    cin>>n;
    for(long long i=1;i<=n;i++)
    cin>>a[i];
    string kq="",luu;
    for(long long i=1;i<n;i++)
    {
        for(long long j=i+1;j<=n;j++)
        {
            if(ss(a[i],a[j])==2)
            {
                luu=a[i];
                a[i]=a[j];
                a[j]=luu;
            }
        }
    }
    for(long long i=1;i<=n;i++)
    kq+=a[i];
    cout<<kq;
}