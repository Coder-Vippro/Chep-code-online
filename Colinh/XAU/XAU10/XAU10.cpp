#include <bits/stdc++.h>

using namespace std;
string s,s1,s2;
int n;
int main()
{
    freopen("XAU10.INP","r",stdin);
    freopen("XAU10.OUT","w",stdout);
    cin>>n>>s;
    int k=s.size();
    s1=s.substr(0,n);
    s2=s.substr(n,k);
    reverse(s1.begin(),s1.end());
    reverse(s2.begin(),s2.end());
    cout<<s1<<s2;
    return 0;
}
