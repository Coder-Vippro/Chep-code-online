#include <bits/stdc++.h>
using namespace std;
int main()
{
   freopen("NGUYENLE.inp","r",stdin);
   freopen("NGUYENLE.out","w",stdout);
    string s;
    cin>>s;
    for(int i=0;i<=s.size();i++)if(s[i]=='.')cout<<" 0.";
    else cout<<s[i];
    return 0;
}
