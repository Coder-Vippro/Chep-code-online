#include <bits/stdc++.h>
using namespace std;
int main()
{
    freopen("honso.inp","r",stdin);
    freopen("honso.out","w",stdout);
    int a,b,ucln,nguyen,ts,ms;
    cin>>a>>b;
    ucln=__gcd(a,b);
    ts=a/ucln;ms=b/ucln;
    nguyen=ts/ms;ts=ts%ms;
    if(nguyen>0) cout<<nguyen<<endl<<ts<<"/"<<ms;
    else cout<<-1;
    return 0;
}
