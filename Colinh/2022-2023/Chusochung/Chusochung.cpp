#include <iostream>
#include <cstdio>
#include <string>
#include <algorithm>
using namespace std;
int main()
{
    freopen("Chusochung.INP","r",stdin);
    freopen("Chusochung.OUT","w",stdout);
    string s;
    string k;
    cin>>s>>k;
    int dem=0;
    for(int i=0;i<s.size();i++)
    {
        if(k.find(s[i])!=k.npos){dem++;}
    }
    cout<<dem;
}