#include <bits/stdc++.h>
using namespace std;
const string kb="qwertyuiopasdfghjkl;zxcvbnm,./";
int main()
{
    freopen("Keyboard.inp","r",stdin);
    freopen("Keyboard.out","w",stdout);
    string s;char x;
    cin>>x>>s;
    for(int i=0;i<s.size();i++)if(x=='R')cout<<kb[kb.find(s[i])-1];
    else cout<<kb[kb.find(s[i])+1];
   return 0;
}
