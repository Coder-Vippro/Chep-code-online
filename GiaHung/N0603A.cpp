#include <bits/stdc++.h>
using namespace std;
string s;
int main()
{
    freopen("N0603A.inp","r",stdin);
    freopen("N0603A.out","w",stdout);
    getline(cin,s);
    int n=s.size();
    for(int i=1;i<=n;i++)
        if(s[i] == ' ' && s[i+1]==' ')
    {
        s.erase(i,1);
        i--;
    }
    if(s[0] ==' ')
         s.erase(0,1);
    if(s[s.size()]== ' ')
        s.erase(s.size()-1,1);

    for(int i=0;i<n;i++)
    {
        if('A' <= s[i] && s[i] <= 'Z')  s[i]+=32;
    }
    cout<<s[i];

    return 0;
}
