#include <bits/stdc++.h>
using namespace std;
string s;
int main()
{
    //freopen("bai1.inp","r",stdin);
    //freopen("bai1.out","w",stdout);
    cin>>s;
    string s1=s;
    reverse(s.begin(),s.end());
    if(s1==s)
        cout<<"YES";
    else cout<<"NO";
    return 0;
}
