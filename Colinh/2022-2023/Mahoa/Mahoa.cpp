#include <iostream>
#include <cstdio>
#include <algorithm>
#include <string>
using namespace std;
string s;
int main()
{
    freopen("Mahoa.INP","r",stdin);
    freopen("Mahoa.OUT","w",stdout);
    cin>>s;
    int temp=0;
    for(int i=0;i<s.size();i++)
    {
        if(temp*10+(s[i]-48)<=122)
        {
            temp=temp*10+s[i]-48;
            if(temp>=97 && temp<=122)
            {
                cout<<char(temp);
                temp=0;
            }
        }
        
    }
}