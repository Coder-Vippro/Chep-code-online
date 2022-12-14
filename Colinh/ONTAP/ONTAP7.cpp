#include <bits/stdc++.h>
using namespace std;
int main()
{
    freopen("ONTAP7.INP","r",stdin);
    freopen("ONTAP7.OUT","w",stdout);
    string s;
    getline(cin,s);
    for(int i=0;i<s.size();i++)
    {
        if(s[i]!='Z' && s[i]!=' ')
        {
            s[i]=char(s[i]-1);
        }
        else if(s[i]!=' ')s[i]='Z';
    }
    cout<<s;

}