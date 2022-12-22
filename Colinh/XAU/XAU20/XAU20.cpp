#include <bits/stdc++.h>
using namespace std;
int main()
{
    freopen("XAU20.INP","r",stdin);
    freopen("XAU20.OUT","w",stdout);
    string a;
    cin>>a;
    char ch; cin>>ch;
    for(int i=0;i<a.size();i++)
    {
        if(a[i]==ch)
            a.erase(i);
    }
    cout<<a;
}
