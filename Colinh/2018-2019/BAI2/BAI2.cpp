#include <iostream>
#include <algorithm>
#include <string>
#include <cstdio>
using namespace std;
string s;
int main()
{
    freopen("BAI2.INP","r",stdin);
    freopen("BAI2.OUT","w",stdout);
    cin>>s;
    sort(s.begin(),s.end());
    if(s[0]==s[s.size()-1])cout<<s[0];
    else cout<<s[s.size()-1]<<' '<<s[0];
}