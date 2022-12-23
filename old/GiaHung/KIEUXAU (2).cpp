#include <bits/stdc++.h>

using namespace std;

int main()
{
    freopen ("KIEUXAU.inp","r",stdin);
    freopen ("KIEUXAU.out","w",stdout);
    string s;
    getline(cin,s);
    int n=s.length(),vt1,vt2;
    vt1=s.find(" ");
    vt2=s.rfind(" ");
    string ho=s.substr(0,vt1);
    string ten=s.substr(vt2+1,n-vt2);
    string dem=s.substr(vt1+1,vt2-vt1);
    cout<<"Ho la:"<< ho<<'\n'<<"Dem la:"<<dem<<'\n'<<"Ten la:"<<ten;
    return 0;
}
