#include <bits/stdc++.h>

using namespace std;

int main()
{
    freopen("XAU15.inp","r",stdin);
    freopen("XAU15.out","w",stdout);
    string a,b;
    getline(cin,a);
    getline(cin,b);
    if(a.find(b,0)!=a.npos)
        cout<<"YES";
    else cout<<"NO";
    return 0;
}
