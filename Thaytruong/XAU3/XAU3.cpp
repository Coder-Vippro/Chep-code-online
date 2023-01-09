#include <bits/stdc++.h>
using namespace std;
string s;
int main()
{
    freopen("XAU3.INP","r",stdin);
    freopen("XAU3.OUT","w",stdout);
    getline(cin,s);
    for(int i=1;i<s.size();i++)
    {
        if(s[i-1]==s[i] && s[i]==' ')
            {
                s.erase(s.begin()+i);
                i--;
            }
    }
    if(s[0]==' ')s.erase(s.begin());
    for(int i=0;i<s.size();i++)
    {
        if(s[i]!=' ')
            {
                cout<<s[i];
            }
            else cout<<'\n';
    }
    return 0;
}
