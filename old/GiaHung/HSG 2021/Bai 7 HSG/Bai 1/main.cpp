#include <iostream>

using namespace std;
long long n,f[21];
long long gt(long long n)
{
    long long t=1;
    for(int i=2;i<=n;i++)t*=i;
    return t;
}
long long tcs(long long n)
{
    long long t=0;
    while(n>0)
    {
        t+=n%10;n/=10;
    }
    return t;
}
int main()
{
    freopen("giaithua.INP" ,"r", stdin);
    freopen("giaithua.OUT", "w", stdout);

    for(int i=2; i<=n;i++)
    {
    while(cin>>n)
    {
        cout<<tcs(gt(n))<<'\n';
    }
    }
 return 0;
}
