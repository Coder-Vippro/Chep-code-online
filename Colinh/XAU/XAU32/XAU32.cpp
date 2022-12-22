#include <bits/stdc++.h>

using namespace std;
int dem=0;
string s;
int main()
{
    freopen("XAU32.INP","r",stdin);
    freopen("XAU32.OUT","w",stdout);
    cin>>s;
    for(int i=0;i<=s.size()-1;i++)
    {
        if(s[i]>='A' && s[i]<='Z')
            dem++;
    }
    cout<<dem;
    return 0;
}
