#include <bits/stdc++.h>
using namespace std;
string s;
int main()
{
    freopen("kt03.INP","r",stdin);
    freopen("kt03.OUT","w",stdout);
    cin>>s;
    for(int i=1;i<s.size();i++)
    {
        if(s[i]=='.' && s[i-1]%2==0)
        {
            cout<<"YES";
            return 0;
        }
    }
    cout<<"NO";
}