#include <bits/stdc++.h>

using namespace std;

int main()
{
    //freopen ("xau20.inp","r",stdin);
    //freopen ("xau20out","w",stdout);
    string s;getline(cin,s);
    char a;cin>>a;
   for(int i=0;i<s.length();i++)if(s[i]!=a)cout<<s[i];
    return 0;
}
