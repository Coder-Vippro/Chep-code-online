#include <bits/stdc++.h>
using namespace std;
string s;
bool normal=false,num=false,shift=false;
int main()
{
    freopen("PERFECTSTRING.INP","r",stdin);
    freopen("PERFECTSTRING.OUT","w",stdout);
    cin>>s;
    for(int i=0;i<s.size();i++)
    {
        if(s[i]>='1' && s[i]<='9')
        {
            num=true;
        }
        if(s[i]>='a' && s[i]<='z')
        {
            normal=true;
        }
        if(s[i]>='A' && s[i]<='Z')
        {
            shift=true;
        }
        if(normal==true && num==true && shift==true)
        {
            cout<<"Perfect";
            return 0;
        }
    }
    cout<<"Not Perfect";

}