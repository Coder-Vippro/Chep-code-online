#include <bits/stdc++.h>

using namespace std;

int main()
{
    freopen("demcs.inp","r",stdin);
    freopen("demcs.out","w",stdout);
    long long n,sl=0,m;
    cin>>n;
    m=n;
    while(n>0)
    {
        if(n%10!=0&&m%(n%10)==0) sl++;
        n=n/10;
    }
    cout<<sl;
    return 0;
}
