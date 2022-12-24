#include <iostream>
#include <cstdio>
#include <string>
using namespace std;
string s;
int main()
{
    freopen("BAI5.INP","r",stdin);
    freopen("BAI5.OUT","w",stdout);
    getline(cin,s);
    for(int i=0; i<s.size();i++)
    {
        if(s[i]==s[i+1] && s[i+1]==' ')
        {
            s.erase(s.begin()+i);
            i--;
        }
        if(s[i]==' '&& s[i+1]>='a' && s[i+1]<='z')
        {
            s[i+1]=s[i+1]-32;
        }
        if(s[i+1]>='A' && s[i+1]<='Z' && s[i]>='a' && s[i]<='z')
        {
            s[i+1]=s[i+1]+32;
        }
    }
    if(s[0]==' ')s.erase(s.begin());
    if(s[s.size()-1]==' ')s.erase(s.size()-1);
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