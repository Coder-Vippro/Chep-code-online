#include <bits/stdc++.h>

using namespace std;

string s;
int main()
{
    freopen("XAU12.INP","r",stdin);
    freopen("XAU12.OUT","w",stdout);
    cin>>s;
    for(int i=0;i<s.size();i++)
    {
        if((s[i]-48)*10+(s[i+1]-48)>=97 && (s[i]-48)*10+(s[i+1]-48)<=122)
        {
            cout<<char((s[i]-48)*10+(s[i+1]-48));
            i=i+1;
        }
        else if((s[i]-48)*100+(s[i+1]-48)*10+(s[i+2]-48)>=97 && (s[i]-48)*100+(s[i+1]-48)*10+(s[i+2]-48)<=122)
            {
                cout<<char((s[i]-48)*100+(s[i+1]-48)*10+(s[i+2]-48));
                i=i+2;
            }
    }
    return 0;
}
