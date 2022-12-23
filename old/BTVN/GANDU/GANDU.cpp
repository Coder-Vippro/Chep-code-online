#include <bits/stdc++.h>
using namespace std;
int main()
{
    //freopen("GANDU.INP","r",stdin);
    //freopen("GANDU.OUT","w",stdout);
    long long n;
    long long dem1=0;
    long long dem=0;
    cin>>n;
    long long k;
    for(long long i=1;i<=n;i++)
    {
        cin>>k;
        if(k==1)dem1++;
        if(k==0)dem++;
    }
    cout<<(1LL<<dem)*dem1;
}