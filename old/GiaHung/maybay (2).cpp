#include <bits/stdc++.h>

using namespace std;

int main()
{
    freopen("maybay.inp","r",stdin);
    freopen("maybay.out","w",stdout);
    int a,b,t;
    cin>>a>>b;
    t=1;
    for(int i=1;i<=a;i++)
    if(a%i==0 && b%i==0) t=i;
    cout<<t;
    return 0;
}
