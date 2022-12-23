#include <bits/stdc++.h>

using namespace std;

int main()
{
    freopen("foruoc.inp","r",stdin);
    freopen("foruoc.out","w",stdout);
    int n;
    cin>>n;
    for(int i=1;i<=n;i++)
        if(n%i==0) cout<<i<<endl;
    return 0;
}
