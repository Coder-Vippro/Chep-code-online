#include <bits/stdc++.h>

using namespace std;
string s;
int main()
{
    freopen("BAI06.INP","r",stdin);
    freopen("BAI06.OUT","w",stdout);
    getline(cin,s);
    for(int i=0;i<s.size();i++)
    {
        if(s[i]==" " && s[i+1]==" ")
            s[i]='\n';
    }
    for(int i=1;i<s.size-1;i++)
    {
        if(s[i]==" " && s[i+1]>'Z')
            s[i+1]=s[i+1]-48;
    }
    for(int i=1;i<s.size();i++)
    {
        if(s[i]>='a' && s[i+1]<'a')
            s[i+1]=s[i+1]+48;
    }
    cout<<s;
    return 0;
}
