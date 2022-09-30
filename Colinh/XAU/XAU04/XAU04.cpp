#include <bits/stdc++.h>
#include <string>
using namespace std;
string s;
int dem=0;
int main()
{
    freopen("XAU04.INP","r",stdin);
    freopen("XAU04.OUT","w",stdout);
    cin>>s;
    for(int i=0;i<s.size();i++)
    {
        if(s[i]>='0' && s[i]<='9')
            dem++;
    }
    cout<<dem;
    return 0;
}
