#include <bits/stdc++.h>
using namespace std;
int main()
{
    freopen("XAUXY.INP","r",stdin);
    freopen("XAUXY.OUT","w",stdout);
    string s;    
    cin>>s;
    sort(s.begin(),s.end());
    int dem=0;
    for(int i=1;i<s.size();i++)
    {
        if(s[i]!=s[i-1])dem++;
    }
    cout<<dem;
    return 0;
}