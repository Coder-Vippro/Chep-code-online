#include <bits/stdc++.h>
using namespace std;
long long csln(long long n)
{
    long long so=0;
    while(n>0)
    {
        if(so<n%10) so=n%10;
        n/=10;
    }
    return so;
}
int main()
{
    freopen("SO_MA_THUAT.inp","r",stdin);
    freopen("SO_MA_THUAT.out","w",stdout);
    long long n;
    cin>>n;
    long long dem=0;
    while(n>0)
    {
        n=n-csln(n);
        dem++;
    }
    cout<<dem;
}