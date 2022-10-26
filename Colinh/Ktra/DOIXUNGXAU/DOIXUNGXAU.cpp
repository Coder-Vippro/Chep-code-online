#include <bits/stdc++.h>
using namespace std;
string s;
int main()
{
    freopen("DOIXUNGXAU.INP","r",stdin);
    freopen("DOIXUNGXAU.OUT","w",stdout);
    cin>>s;
    string k=s;
    reverse(s.begin(),s.end());
    if(k==s)
    {
        cout<<"YES";
    }
    else cout<<"NO";
}