#include <bits/stdc++.h>
using namespace std;
int main()
{
    freopen("cachdeuk.inp","r",stdin);
    freopen("cachdeuk.out","w",stdout);
    int n,k,so=1;
    cin>>n>>k;
    for(int i=1;i<=n;i++)
    {
        cout<<so<<" ";
        so=so+k;
    }
    return 0;
}
