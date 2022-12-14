#include <bits/stdc++.h>

using namespace std;

int main()
{
    freopen("TUNG_HUNG_XUC_XAC.inp","r",stdin);
    freopen("TUNG_HUNG_XUC_XAC.out","w",stdout);
    int a,b,c;
    cin>>a>>b>>c;
    if(a==b) cout<<c;
    else if( b==c) cout<<a;
    else if( a==c) cout<<b;
    else cout<<0;
    return 0;
}
