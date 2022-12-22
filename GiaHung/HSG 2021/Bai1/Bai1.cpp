#include <bits/stdc++.h>

using namespace std;
string s;
int main()
{
    freopen("Bai1.INP","r",stdin);
    freopen("Bai1.OUT","w",stdout);
    getline(cin,s);
    int dem1=0;
    int dem2=0;
    for(unsigned int i=0;i<s.size();i++)
    {
        if(s[i]==' ')
            s.erase(s.begin()+i);
    }
    for(unsigned int i=0;i<s.size();i++)
        if(s[i]=='1' && s[i+1]=='1')
    {
        s[i]='0';
        s[i+1]='0';
        dem1++;

    }
    else if(s[i]=='0'&& s[i+1]=='1' && s[i+2]=='0')
    {
        s[i]='0';
        s[i+1]='0';
        s[i+2]='0';
        dem1++;
    }

    for(unsigned int i=0;i<=s.size();i++)
    {
        if(s[i]!='0')
        {
            cout<<"Khong the bien doi duoc";
            return 0;
        }
        else
        {
            dem2++;
        }

    }
    cout<<dem2;
    return 0;
}


