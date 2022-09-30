#include <bits/stdc++.h>
using namespace std;
string s;
int main()
{
    freopen("XAU05.inp","r",stdin);
    freopen("XAU05.out","w",stdout);
    cin>>s;
    string s1=s;
    reverse(s.begin(),s.end());
    if(s1==s)
        cout<<"YES";
    else cout<<"NO";
    return 0;
}
