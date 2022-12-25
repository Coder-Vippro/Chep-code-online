#include <iostream>
#include <cstdio>
using namespace std;
int dem=0;
int main()
{
    freopen("Chusochan.INP","r",stdin);
    freopen("Chusochan.OUT","w",stdout);
    string s;
    cin>>s;
    for(int i=0;i<s.size();i++)
    {
        if(s[i]%2==0)
        dem++;
    }
    cout<<dem;
}