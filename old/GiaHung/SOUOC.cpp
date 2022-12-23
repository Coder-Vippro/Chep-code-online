#include <bits/stdc++.h>
using namespace std;
int main()
{
   freopen("souoc.inp","r",stdin);
   freopen("souoc.out","w",stdout);
    long long n,d=2;
    cin>>n;
    for(int i=2;i*i<=n;i++)
        if(n%i==0)
    {
        d++;
        if(i*i!=0) d++;
    }
    cout<<d;
    return 0;
}
