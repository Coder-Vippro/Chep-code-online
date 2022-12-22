#include<bits/stdc++.h>

using namespace std;

int main()
{
    freopen("XAU07.inp","r",stdin);
    freopen("XAU07.out","w",stdout);
    int d=1;
    string s;
    getline(cin,s);
    while(s[0]==' ')
        s.erase(0,1);
    while(s[s.size()-1]==' ')
        s.erase(s.size()-1,1);
    for(int i=1;i<s.size();i++)
        while(s[i]==' '&&s[i+1]==' ')
        s.erase(i,1);
    for(int i=0;i<s.size();i++)
        if(s[i]==' ')
        d++;
    cout<<d;
    return 0;
}
