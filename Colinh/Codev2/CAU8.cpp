#include <bits/stdc++.h>
using namespace std;
string s;
int main()
{
    freopen("CAU8.INP","r",stdin);
    freopen("CAU8.OUT","w",stdout);
    getline(cin,s);
    int n=s.length();
    while(n--)
    {
        if(s[n]==' ' && s[n-1]==' ')
        {
            s.erase(s.begin()+n);
        }
        
    }
    if(s[0]==' ')s.erase(0);
    if(s[s.size()]==' ')s.erase(s.size());
    cout<<s;
}