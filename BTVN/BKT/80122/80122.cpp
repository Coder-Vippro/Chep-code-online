#include <bits/stdc++.h>
using namespace std;
long long dem=0;
long long a;
int main()
{
    freopen("80122.INP","r",stdin);
    freopen("80122.OUT","w",stdout);
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
    cin>>a;
    for(long long i=1;i<=a;i++)
    {
        if(a%i==0)
        dem++;
    }
    cout<<dem;
}