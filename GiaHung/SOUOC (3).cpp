#include <bits/stdc++.h>
using namespace std;
int main()
{
    freopen("SOUOC.inp","r",stdin);
    freopen("SOUOC.out","w",stdout);
    int n,dem=0;
    cin>>n;
    for(int i=1;i<=n;i++)
        if(n%i==0)dem++;
    cout<<dem;
    return 0;
}
