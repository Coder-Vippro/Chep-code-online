#include <bits/stdc++.h>
using namespace std;
int main()
{
    freopen("SAPXEP3SO.inp","r",stdin);
    freopen("SAPXEP3SO.out","w",stdout);
    int a,b,c;
    cin>>a>>b>>c;
    if(a<b && b<c) cout<<a<<" "<<b<<" "<<c;
    else if(a<c && c<b) cout<<a<<" "<<c<<" "<<b;
    else if(b<a && a<c) cout<<b<<" "<<a<<" "<<c;
    else if(b<c && c<a) cout<<b<<" "<<c<<" "<<a;
    else if(c<b && b<a) cout<<c<<" "<<b<<" "<<a;
    else if(c<a && a<b) cout<<c<<" "<<a<<" "<<b;
    return 0;
}
