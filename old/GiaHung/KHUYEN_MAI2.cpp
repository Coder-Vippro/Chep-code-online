#include <bits/stdc++.h>

using namespace std;

int main()
{
    freopen("CHIA_QUA.inp","r",stdin);
    freopen("CHIA_QUA.out","w",stdout);
    long long a,b,d=0;
    cin>>a>>b;
    for(int i=1;i<=min(a,b);i++)if(a%i==0&&b%i==0)d++;
    cout<<d;
    return 0;
}
