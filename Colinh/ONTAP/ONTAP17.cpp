#include <bits/stdc++.h>
using namespace std;
string s;
int main()
{
    freopen("ONTAP17.INP","r",stdin);
    freopen("ONTAP17.OUT","w",stdout);
    cin>>s;
    sort(s.begin(),s.end());
    cout<<s.begin()<<' '<<s[s.size()-1];
    return 0;
}