#include <bits/stdc++.h>
using namespace std;
string s;
int dem=0;
int maxx;
char kytu;
int dem2=0;
int maxx=-1e9;
char ktmaxx;
int main()
{
    freopen("ONTAP20.INP","r",stdin);
    freopen("ONTAP20.OUT","w",stdout);
    getline(cin,s);
    for(int i=1;i<s.size();i++)
    {
        if(s[i]==s[i-1] && s[i-1]==' ')
        {
            s.erase(s.begin()+i-1);
        }
    }
    if(s[0]==' ')s.erase(s.begin());
    for(int i=0;i<s.size();i++)
    {
        if(s[i]==' ' && s[i+1]>='a' && s[i+1]<='z' && s[i+1]>='1' && s[i+1]<='9')
        dem++;
    }
    sort(s.begin(),s.end());
    for(int i=1;i<s.size();i++)
    {
        if(s[i]==s[i-1] && s[i]!=' ')
        {
            dem2++;
            kytu=s[i];
        }
        else if(dem2>maxx)
        {
            ktmaxx=kytu;
            maxx==dem2;
        }
    }
    cout<<dem<<' '<<ktmaxx;
}