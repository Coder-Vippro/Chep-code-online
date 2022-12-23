#include <bits/stdc++.h>
using namespace std;
int main()
{
    freopen("game.inp","r",stdin);
    freopen("game.out","w",stdout);
    int a,b;
    cin>>a>>b;
    if(a%b==0) cout<<2;
    else cout<<1;
    return 0;
}
