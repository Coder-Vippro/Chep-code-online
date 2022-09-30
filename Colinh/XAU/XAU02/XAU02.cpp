#include <bits/stdc++.h>
#include <string>
using namespace std;
string s;
int dem=0;
char ch;
int main()
{
    freopen("XAU02.INP","r",stdin);
    freopen("XAU02.OUT","w",stdout);
    getline(cin,s);
    cin>>ch;
    for(int i=0; i<s.size();i++)
    {
        if(s[i]==ch)
            dem++;
    }
    cout<<dem;
    return 0;
}
