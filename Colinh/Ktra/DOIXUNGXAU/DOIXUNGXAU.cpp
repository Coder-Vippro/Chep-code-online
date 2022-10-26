#include <bits/stdc++.h>
using namespace std;
string s;
int main()
{
    freopen("BAI3.INP","r",stdin);
    freopen("BAI3.OUT","w",stdout);
    cin>>s;
    string k=s;
    reverse(s.begin(),s.end());
    if(k==s)
    {
        cout<<"YES";
    }
    else cout<<"NO";
}