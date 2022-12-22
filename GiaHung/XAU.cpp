#include <bits/stdc++.h>
using namespace std;

int main()
{
    freopen("XAU.inp","r",stdin);
    freopen("XAU.out","w",stdout);
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
    string s;
    cin>>s;
    long long d=0;
    for(int i=0;i<s.size()-1;i++){
        if(s[i]=='0'||s[i]=='4'||s[i]=='8')d++;
        if(((s[i]-48)*10+s[i+1]-48)%4==0)d=d+1+i;
    }
    if(s[s.size()-1]=='0'||s[s.size()-1]=='4'||s[s.size()-1]=='8')d++;
    cout<<d;
    return 0;
}


