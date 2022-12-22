#include <bits/stdc++.h>
using namespace std;
int main()
{
    freopen("CAU7.INP","r",stdin);
    freopen("CAU7.OUT","w",stdout);
    string s;
    cin>>s;
    sort(s.begin(), s.end());
    int dem=1;
    for(int i=1;i<s.size();i++)
    {
        if(s[i]!=s[i-1])
        {
            dem++;
        }
    }
    cout<<dem;
}