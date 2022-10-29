#include <bits/stdc++.h>
using namespace std;
long long n;
int main()
{
    freopen("MA.INP","r",stdin);
    freopen("MA.OUT","w",stdout);
    cin>>n;
    for(long long i=1;i<=n;i++)
    {
        cout<<i*i*(i*i-1)/2-4*(i-1)*(i-2)<<'\n';
    }
}