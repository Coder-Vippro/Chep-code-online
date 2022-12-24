#include <bits/stdc++.h>
using namespace std;
string s;
int main()
{
    freopen("TIMSO.INP","r",stdin);
    freopen("TIMSO.OUT","w",stdout);
    cin>>s;
    long long maxx=-1e9;
    long long minn=1e9;
    string k="";
    string ss;
    for(int i=0;i<s.size();i++)
    {
        if(s[i]>=0 && s[i]<='9')
        {
            k=k+s[i];
        }
        else
        {
            stringstream ss;
            long long so;
            ss<<k;
            ss>>so;
            if(so>maxx)
            {
                maxx=so;
            }
            if(so<minn)
            {
                minn=so;
            }
            k="";
        }
    }
    cout<<minn<<'\n'<<maxx;
}