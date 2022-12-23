#include <bits/stdc++.h>

using namespace std;

int main()
{
    freopen("Thaythe.inp","r",stdin);
    freopen("Thaythe.out","w",stdout);
    string s;
    getline(cin,s);
    string a;
    getline(cin,a);
    string b;
    getline(cin,b);
    int n=s.length(),vt1,vt2;
    vt1=s.find(a);
    vt2=a.length()-1;
    string ho=s.substr(0,vt1);
    cout<<s;
    return 0;
}
