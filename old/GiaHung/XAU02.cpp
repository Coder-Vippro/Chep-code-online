#include <bits/stdc++.h>

using namespace std;

int main()
{
    freopen("XAU02.inp","r",stdin);
    freopen("XAU02.out","w",stdout);
    int d=0;
    string s;
    getline(cin,s);
    char c;
    cin>>c;
    for(int i=0;i<=s.length();i++)
        if(s[i]==c) d++;
    cout<<d;
    return 0;
}
