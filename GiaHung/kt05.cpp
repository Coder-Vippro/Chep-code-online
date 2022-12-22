#include <bits/stdc++.h>

using namespace std;

int main()
{
    freopen("KT05.inp","r",stdin);
    freopen("KT05.out","w",stdout);
    string s;
    while(getline(cin,s))
    {
        int ma=0,d=0,luu=0;
        for(int i=0;i<s.length();i++)
        {
            if(s[i]!=' ')d++;
            else
            {
                if(d>ma)
                {
                    ma=d;
                    luu=i-1;
                }
                d=0;
            }
        }
        for(int i=luu-ma