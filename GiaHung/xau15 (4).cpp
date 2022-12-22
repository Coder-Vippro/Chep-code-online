#include <bits/stdc++.h>

using namespace std;

int main()
{
    freopen ("xau2.inp","r",stdin);
    freopen ("xau2.out","w",stdout);
    string s;
    getline(cin,s);
    int n=s.length(),dt=1,dth=0,dh=0,dcs=0;
    for(int i=0 ;i<n;i++) {
            if(s[i]==' '&& s[i+1]!=' ')dt++;
            if(s[i]>='a'&& s[i]<='z')dth++;
            if(s[i]>='A'&& s[i]<='Z')dh++;
            if(s[i]>='0'&& s[i]<='9')dcs++;
    }

    cout<<dt<<'\n'<<dcs<<'\n'<<dth<<'\n'<<dh<<'\n';
    cout<<n-dcs-dth-dh;
    return 0;
}
