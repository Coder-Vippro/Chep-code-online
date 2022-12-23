#include <bits/stdc++.h>

using namespace std;

int main()
{
    freopen("N0105A.inp","r",stdin);
    freopen("N0105A.out","w",stdout);
    int a,b,c,S;
    cin>>a>>b>>c;
    S=a*(b+c)+b*(a+c);
    cout<<S;
    return 0;
}
