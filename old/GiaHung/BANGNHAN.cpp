#include <bits/stdc++.h>
using namespace std;
int main()
{
    freopen("bangnhan.inp","r",stdin);
    freopen("bangnhan.out","w",stdout);
    int n,m;
    cin>>n>>m;
    if(n*m<=0) cout<<0;
    else for(int i=1;i<=m;i++) cout<<n<<"x"<<i<<"="<<n*i<<endl;
    return 0;
}
