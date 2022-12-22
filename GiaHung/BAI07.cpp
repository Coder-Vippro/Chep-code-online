#include <bits/stdc++.h>

using namespace std;
bool KT(string s){
int ss=0,d=0;
for(int i=0;i<=s.size();i++){
 ss=ss+s[i]-48;
 if(s[i]=='0')d++;
}
if(ss%3==0&&d>0)return 1;
else return 0;
}
int main()
{
    freopen("BAI07.inp","r",stdin);
    freopen("BAI07.out","w",stdout);
    string s;
    cin>>s;
    if(KT(s)==0){cout<<-1;return 0;}
    sort(s.begin(),s.end(),greater<int>());
    cout<<s;
    return 0;
}
