#include <bits/stdc++.h>

using namespace std;

int main()
{
    freopen("CS_TAN_CUNG.inp","r",stdin);
    freopen("CS_TAN_CUNG.out","w",stdout);
    int a,n,lt;
    cin>>a>>n;
    n=n%4;lt=1;
    if(n%4==0) n=a;
    for(int i=1;i<=n;i++);
    lt=lt*a;
    cout<<lt%10;
    return 0;
}
