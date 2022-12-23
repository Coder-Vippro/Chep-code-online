#include <bits/stdc++.h>

using namespace std;

int main()
{
    freopen("tiendien.inp","r",stdin);
    freopen("tiendien.out","w",stdout);
    int a;
    cin>>a;
    if(a<101) cout<<a*3000;
    else cout<<100*3000+(a-100)*4500;
    return 0;
}
