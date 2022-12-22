#include <bits/stdc++.h>
using namespace std;
bool kts(char s)
{
    if(s<='9' && s>='0')
    return true;
    return false;
}
int main()
{
    freopen("KC.INP","r",stdin);
    freopen("KC.OUT","w",stdout);
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
    string s;
    cin>>s;
    int tong=0;
    for(int i=0;i<s.size();i++)
    {
        if(s[i]=='D' && s[i+1]=='0')
        s.erase(s.begin()+i+1);
    }
    for(int i=0;i<s.size();i++)
    {
        if(kts(s[i])==true && kts(s[i+1])==true && kts(s[i+2])==true && kts(s[i+3])==true)
        {tong=tong+(s[i]-48)*1000 + (s[i+1]-48)*100 + (s[i+2]-48)*10 + (s[i+3]-48);i=i+4;}
        else if(kts(s[i])==true && kts(s[i+1])==true && kts(s[i+2])==true)
        {tong=tong+(s[i]-48)*100 + (s[i+1]-48)*10 + (s[i+2]-48)*1;i=i+3;}
        else if(kts(s[i])==true && kts(s[i+1])==true)
        {tong=tong+(s[i]-48)*10 + (s[i+1]-48)*1;i=i+2;}
        else if(kts(s[i])==true)
        {tong=tong+(s[i]-48);i=i+1;}
    }
    cout<<tong;
}