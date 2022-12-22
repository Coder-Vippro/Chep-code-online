#include <bits/stdc++.h>
#include <string>
using namespace std;
string s;
int main()
{
    freopen("XAU03.INP","r",stdin);
    freopen("XAU28.OUT","w",stdout);
    cin>>s;
    for(int i=0;i<s.size();i++)
    {
        if(s[i]>='a' && s[i]<='z')
            s[i]=s[i]-32;
    }
    cout<<s;
    return 0;
}
