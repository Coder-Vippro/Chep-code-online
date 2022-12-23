#include <bits/stdc++.h>

using namespace std;

int main()
{
    freopen ("DEM_IN_HOA.inp","r",stdin);
    freopen ("DEM_IN_HOA.out","w",stdout);
    string s;
    getline(cin,s);
    int n=s.length(),dh=0;
    for(int i=0 ;i<n;i++) {
            if(s[i]>='A'&& s[i]<='Z')dh++;
    }
    cout<<dh;

    return 0;
}
