#include <bits/stdc++.h>

using namespace std;

int main()
{
    freopen("xau1.inp","r",stdin);
    freopen("xau1.out","w",stdout);
    string s;
    getline(cin,s);
    int n=s.length(),dem=0;
    cout<<n<<'\n';
    for(int i=0;i<n;i++)
        if(s[i]==' ') dem++;
    cout<<dem;
    return 0;
}
