#include <bits/stdc++.h>
using namespace std;
string s;
int dem=0;
int main()
{
    freopen("XAU09.INP","r",stdin);
    freopen("XAU09.OUT","w",stdout);
    cin>>s;
    sort(s.begin(),s.end());
    for(int i=0;i<s.size();i++)
    {
        if(s[i]!=s[i+1])
            dem++;
    }
    cout<<dem;
    return 0;
}
