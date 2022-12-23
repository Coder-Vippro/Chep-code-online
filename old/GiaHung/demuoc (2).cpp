#include <bits/stdc++.h>
using namespace std;
int main()
{
    freopen("DEMUOC.inp","r",stdin);
    freopen("DEMUOC.out","w",stdout);
    int n,dem=0;
    cin>>n;
    for(int i=1;i<=n;i++)
        if(n%i==0) dem++;
    cout<<dem;
    return 0;
}
