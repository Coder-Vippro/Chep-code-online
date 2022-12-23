#include <bits/stdc++.h>
using namespace std;
int main()
{
    freopen ("DEMCHUOI.inp","r",stdin);
    freopen ("DEMCHUOI.out","w",stdout);
    string s;getline(cin,s);
    long long n=s.size();
    cout<<n*(n-1);
    return 0;
}
