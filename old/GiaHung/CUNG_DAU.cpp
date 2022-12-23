#include <bits/stdc++.h>

using namespace std;
long long a,b,c;
int main()
{
    freopen("CUNG_DAU.INP","r",stdin);
    freopen("CUNG_DAU.OUT","w",stdout);
    cin>>a>>b>>c;
    if(a*b>0 && b*c>0)cout<<"Yes";
    else cout<<"No";
    return 0;
}
