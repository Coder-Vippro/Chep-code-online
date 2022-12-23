#include <bits/stdc++.h>
using namespace std;
int main()
{
    freopen("insocl.inp","r",stdin);
    freopen("insocl.out","w",stdout);
    int n;
    cin>>n;
    for(int i=0;i<=n;i++)
    {
        if(i%2==0 && n%2==0) cout<<i<<" ";
        else if(i%2!=0 && n%2!=0) cout<<i<<" ";
    }
    return 0;
}
