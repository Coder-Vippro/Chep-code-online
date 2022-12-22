#include <bits/stdc++.h>
using namespace std;
int main()
{
    freopen("antoan.inp","r",stdin);
    freopen("antoan.out","w",stdout);
    int a,b,c,k,t;
    cin>>a>>b>>k>>t;
    c=3*t/a/b*100;
    if(c<=k) cout<<"YES"; else cout<<"WARNING";
    return 0;
}
