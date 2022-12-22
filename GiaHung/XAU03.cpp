#include<bits/stdc++.h>

using namespace std;

int main()
{
    freopen("XAU03.inp","r",stdin);
    freopen("XAU03.out","w",stdout);
    string s;
    cin>>s;
    for (int i = 0; i < s.length(); i++)
     {
        if (s[i] >= 'a' && s[i] <= 'z')
        {
            s[i] -= 32;
        }
    }
   cout<<s;
    return 0;
}
