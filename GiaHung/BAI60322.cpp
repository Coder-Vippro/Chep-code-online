#include <bits/stdc++.h>

using namespace std;

int main()
{
    //freopen("BAI60322.inp","r",stdin);
    //freopen("BAI60322.out","w",stdout);
    string s;getline(cin,s);
    int n=s.size();
    for(int i=1;i<=n;i++)cout<<s.substr(0,i)<<endl;
    for(int i=n;i>=1;i--)cout<<s.substr(0,i)<<endl;
    return 0;
}
