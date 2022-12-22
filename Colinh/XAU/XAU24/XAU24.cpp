#include <bits/stdc++.h>

using namespace std;

int main()
{
    freopen("XAU24.INP","r",stdin);
    freopen("XAU24.OUT","w",stdout);
    string s;
    cin>>s;
    for(int i=0; i<s.size();i++)
    {
        if((s[i]-48)%2==0)
            s.erase(i);
    }
    string temp=s;
    reverse(s.begin(),s.end());
    if(s==temp)cout<<"YES";
    else cout<<"NO";
    return 0;
}
