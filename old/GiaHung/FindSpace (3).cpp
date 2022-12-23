#include <bits/stdc++.h>
using namespace std;
int main()
{
    freopen("findspace.inp","r",stdin);
    freopen("findspace.out","w",stdout);
    string s;
    getline(cin,s);
    cout<<fixed<<setprecision(2)<<s.find(" ")+1;
}
