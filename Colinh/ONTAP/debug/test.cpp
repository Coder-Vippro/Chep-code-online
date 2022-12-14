#include <bits/stdc++.h>
using namespace std;
string giaima(string s)
{
    for(int i=0;i<s.size();i++)
    {
        if(s[i]!=' ')
        {
            if(s[i]!='A')
            s[i]=char(s[i]-1);
            else if(s[i]=='A')s[i]='Z';
        }
    }
    return s;
}
string s;
int n;
int main()
{
    freopen("ONTAP7.INP","r",stdin);
    //freopen("ONTAP7.OUT","w",stdout);
    freopen("kq.OUT","w",stdout);
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
    while(cin>>n)
    {
        getline(cin,s);
        for(int i=1;i<=n;i++)
        {
            s=giaima(s);
        }
        cout<<s<<'\n';
    }
    
}