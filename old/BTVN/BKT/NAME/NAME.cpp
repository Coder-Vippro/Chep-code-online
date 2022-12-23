#include <bits/stdc++.h>

using namespace std;
string s;
int main()
{
    freopen("NAME.INP","r",stdin);
    freopen("NAME.OUT","w",stdout);
    getline(cin,s);
    for(int i=s.size()-1;i>=0;i--)
    {
        if(s[i]==' ' && s[i-1]==' ')
            s.erase(s.begin()+i);
    }
    if(s[0]==' ')s.erase(s.begin());
    if(s[0]>='a' && s[0]<='z')s[0]=s[0]-32;
    for(int i=0;i<s.size();i++)
    {
        if(s[i]==' ' && (s[i+1]>='a' && s[i+1]<='z'))
            s[i+1]=s[i+1]-32;
        else if((s[i]>='A' && s[i]<='Z' && s[i+1]>='A' && s[i+1]<='Z') || (s[i]>='a' && s[i]<='z' && s[i+1]>='A' && s[i+1]<='Z'))
        {
            s[i+1]=s[i+1]+32;
        }
    }
    cout<<s;
    return 0;
}
