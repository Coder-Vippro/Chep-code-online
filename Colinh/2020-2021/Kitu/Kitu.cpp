#include <iostream>
#include <cstdio>
#include <string>
using namespace std;
int dem=0;
string s;
int main()
{
    freopen("Kitu.INP","r",stdin);
    freopen("Kitu.OUT","w",stdout);
    cin>>s;
    for(int i=0;i<s.size();i++)
    {
        if(s[i]>='0' && s[i]<='9')
        dem++;
    }
    cout<<dem;
}