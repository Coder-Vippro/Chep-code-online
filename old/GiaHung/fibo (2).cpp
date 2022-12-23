#include <bits/stdc++.h>

using namespace std;

int main()
{
    freopen("fibo.inp","r",stdin);
    freopen("fibo.out","w",stdout);
    long long f1=1,f2=1,f3;
    cin>>f1=1>>f2=1>>f3;
    for(int i=1;i<=n;i++)
{
    cout<<f1<<" ";
    f3=f1+f2;
    f1=f2;f2=f3;
}
    return 0;
}
