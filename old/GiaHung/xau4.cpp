#include <bits/stdc++.h>
using namespace std;
int main()
{
    freopen("xaudai.inp","r",stdin);
    freopen("xaudai.out","w",stdout);
    string a,b;
    getline(cin,a);
    getline(cin,b);
    if(a.length()>b.length())cout<<a;else cout<<b;
    return 0;
}
