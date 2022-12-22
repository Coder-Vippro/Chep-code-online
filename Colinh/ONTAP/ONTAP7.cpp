#include <bits/stdc++.h>
using namespace std;
string giaima(string s,int n)
{
    for(int i=0;i<s.size();i++)
    {
        if(s[i]!=' ')
        {
            if(s[i]-64-n<0 && s[i]!='A')
            {
                s[i]='Z'-abs(s[i]-64-abs(s[i]-64-abs(s[i]-64-n)));
            }
            else if(s[i]!='A')
            s[i]=char(s[i]-n);
            else if(s[i]=='A')
            {
                s[i]='Z';
                s[i]=char(s[i]-n+1);
            }
        }
    }
    return s;
}
string s;
int n;
int main()
{
    freopen("ONTAP7.INP","r",stdin);
    freopen("ONTAP7.OUT","w",stdout);
    while(1>0)
    {
        cin>>n;
        cin.ignore;
        getline(cin,s);
        cout<<giaima(s,n)<<'\n';
    }
    
}