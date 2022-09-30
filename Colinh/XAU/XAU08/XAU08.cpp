#include <bits/stdc++.h>
#include <string>
using namespace std;
string s;
int main()
{
    freopen("XAU08.INP","r",stdin);
    freopen("XAU08.OUT","w",stdout);
    cin>>s;
    for(int i=s.size()-1;i>=0;i--)
    {
        if(s[i]>='0' && s[i]<='9')
            s.erase(s.begin()+i);
    }
    cout<<s;
    return 0;
}
