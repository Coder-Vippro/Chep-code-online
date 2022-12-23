#include <bits/stdc++.h>

using namespace std;
string s;
int n;
int main()
{
    //freopen("STRDEL.inp","r",stdin);
    //freopen("STRDEL.out","w",stdout);
    cin>>n;
    while(n--)
    {
        cin>>s;
        unsigned int t=s.size();
        for(unsigned int i=1;i<s.size();i++)
        {
            if(s[i]==s[i-1] && s[i]=='B')
                {
                    t=t-2;
                    i=i+1;
                }
            else if(s[i]=='B' && s[i-1]=='A')
                {
                    t=t-2;
                    i=i+1;
                }
        }
        cout<<t<<'\n';
    }
    return 0;
}
