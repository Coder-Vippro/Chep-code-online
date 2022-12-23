#include <bits/stdc++.h>
using namespace std;
string s;
int main()
{
    freopen("BAI06.INP","r",stdin);
    freopen("BAI06.OUT","w",stdout);
    getline(cin,s);
    int n=s.size();
    for(int i=1;i<n;i++)
    {
        if(s[i]==s[i-1] && s[i]==' '){s.erase(s.begin()+i);i--;}
        
    }
    for(int i=0;i<=s.size();i++)
    {
        if(s[i]>='a' && s[i]<='z' && s[i-1]==' ')
        s[i]=s[i]-32;
        if(s[i-1]>='A' && s[i-1]<='Z' && s[i]>='A' && s[i]<='Z')
        s[i]=s[i]+32;
        if(s[i-1]>='a' && s[i-1]<='z' && s[i]>='A' && s[i]<='Z')
        s[i]=s[i]+32;
        if(s[i]>='A' && s[i]<='Z' && s[i-1]>='a' && s[i-1]<='z')
        s[i]=s[i]+32;
    }
    if(s[0]==' ')s.erase(s.begin());
    if(s[0]>='a' && s[0]<='z')s[0]=s[0]-32;
    cout<<s;
}