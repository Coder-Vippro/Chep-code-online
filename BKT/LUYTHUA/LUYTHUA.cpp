#include <bits/stdc++.h>
using namespace std;
long long tongluythua(long long n,long long k)
{
    long long result=1;
    for(long long i=1;i<=k;i++)
    {
        result=result*n;
    }
    return result;
}
int main()
{
    freopen("LUYTHUA.INP","r",stdin);
    freopen("LUYTHUA.OUT","w",stdout);
    long long a,n,d;
    cin>>a>>n>>d;
    long long tong=1;
    for(long long i=1;i<=n;i++)
    {
        tong=tong+tongluythua(a,i*d);
    }
    cout<<tong;
    return 0;
}