#include <bits/stdc++.h>

using namespace std;

int main()
{
    freopen("BONG_RO.inp","r",stdin);
    freopen("BONG_RO.out","w",stdout);
    int x,y;
    cin>>x>>y;
    if(x<y && x+3>y) cout<<"Yes";
    else if (x>y && y+3>x) cout<<"Yes";
    else cout<<"No";
    return 0;
}
