#include <iostream>
#include <cstdio>
#include <algorithm>
#include <string>
using namespace std;
string s;
int main()
{
    freopen("XAUTG.INP","r",stdin);
    freopen("XAUTG.OUT","w",stdout);
    while(getline(cin,s))
    {
        reverse(s.begin(),s.end());
        cout<<s<<'\n';
    }
    return 0;
}