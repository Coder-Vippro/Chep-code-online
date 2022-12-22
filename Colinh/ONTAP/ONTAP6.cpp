#include <bits/stdc++.h>
using namespace std;
string s;
int main()
{
    freopen("ONTAP6.INP","r",stdin);
    freopen("ONTAP6.OUT","w",stdout);
    cin>>s;
    char tmp=s[0];
    cout<<tmp;
    for(int i=1;i<s.size();i++)
    {
        if(s[i]!=tmp)
        {
            cout<<s[i];
            tmp=s[i];
        }
    }
    
}