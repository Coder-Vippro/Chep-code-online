#include <bits/stdc++.h>

using namespace std;

int main()
{
    freopen("Smile.inp","r",stdin);
    freopen("Smile.out","w",stdout);
    int n;
    cin>>n;
    string s;
    cin>>s;
    for(int i=0;i<=s.size();i++)for(int i=0;i<=s.size();i++)if(s[i]==s[i+1]) s.erase(i,1);
    cout<<s.size();
    return 0;
}
