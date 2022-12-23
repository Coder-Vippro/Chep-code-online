#include <bits/stdc++.h>

using namespace std;

int main()
{
    freopen("BAI60722.INP","r",stdin);
    freopen("BAI60722.OUT","w",stdout);
    string s;
    cin>>s;
    int x=0,d=0;
    sort(s.begin(),s.end(),greater<int>());
    if(s[s.size()-1]!='0'){cout<<-1;return 0;}
    for(int i=0;i<=s.size()-1;i++)int x=x+char(x-48);
    if(x%3==0)cout<<s;
    else cout<<-1;
    return 0;
}
