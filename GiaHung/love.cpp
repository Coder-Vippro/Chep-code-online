#include <bits/stdc++.h>

using namespace std;

int main()
{
    freopen("tongso.inp","r",stdin);
    freopen("tongso.out","w",stdout);
    int a,b,r;
    cin>>a>>b>>r;
    if(a>r) cout<<"day 1";
    else if(a/2+b>r) cout<<"day 2";
        else cout<<"never";
    return 0;
}
