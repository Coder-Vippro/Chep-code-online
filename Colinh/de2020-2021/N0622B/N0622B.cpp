#include <bits/stdc++.h>
using namespace std;
string s;
int main()
{
    freopen("N0622B.INP","r",stdin);
    freopen("N0622B.OUT","w",stdout);
    cin>>s;
    for(int i=0;i<s.size();i++)
    {
        if(s[i]%2==0)
        {s.erase(s.begin()+i);i--;}
    }
    string k=s;
    cout<<k<<'\n';
    reverse(s.begin(),s.end());
    if(s==k)
    {
        cout<<"YES";
    }
    else {cout<<"NO";}
}