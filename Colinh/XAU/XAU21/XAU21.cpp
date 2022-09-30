#include <bits/stdc++.h>

using namespace std;
string s;
int main()
{
    freopen("XAU21.INP","r",stdin);
    freopen("XAU21.OUT","w",stdout);
    cin>>s;
    for(int i=0;i<s.size();i++)
        for(int j=s.size()-1;j>=0;j--)
        {
            if(s[i]==s[j])
                s.erase(j);
        }
        cout<<s;
    return 0;
}
