#include <bits/stdc++.h>

using namespace std;

int main()
{
    freopen("XAU05.inp","r",stdin);
    freopen("XAU05.out","w",stdout);
    string s, s1="";
    getline(cin,s);
    for (int i=s.length()-1; i>=0; i--)
        s1=s1+s[i];
    if (s1==s)
        cout << "YES";
    else
        cout << "NO";
    return 0;
}
