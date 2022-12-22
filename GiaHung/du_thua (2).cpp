#include <bits/stdc++.h>
using namespace std;
int main()
{
    freopen("du_thua.inp","r",stdin);
    freopen("du_thua.out","w",stdout);
    int a;
    cin>>a;
    if(a%1000==0) cout<<0;
    else cout<<1000-a%1000;
    return 0;
}