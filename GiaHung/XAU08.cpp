#include <bits/stdc++.h>

using namespace std;

int main()
{
    freopen("XAU08.inp","r",stdin);
    freopen("XAU08.out","w",stdout);
    string s;
    getline(cin,s);
    for(int i=0;i<=s.size();i++)
    {
         if(s[i]>=65&&s[i]<=122)
         cout<<s;
     }
    return 0;
}
