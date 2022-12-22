#include <bits/stdc++.h>
using namespace std;

int main()
{
    freopen("DONGHO.inp","r",stdin);
    freopen("DONGHO.out","w",stdout);
    int n;
    cin>>n;
    if(n>0) cout<<n%12;
    else if(n<0)cout<<12-abs(n%12);
    else cout<<12;
    return 0;
}
