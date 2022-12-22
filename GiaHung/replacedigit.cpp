
#include <bits/stdc++.h>
using namespace std;
int main()
{
    freopen("replacedigit.INP","r",stdin);
    freopen("replacedigit.OUT","w",stdout);
    int n;
    cin>>n;
    string s;
    while(n)
    {
        cin>>s;
        for(int i=0;i<s.size();i++)
        {
            if(s[i]=='0')
            {
                s[i]='5';
            }
        }
        cout<<s<<endl;
        n--;
    }
}