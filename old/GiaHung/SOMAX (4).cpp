#include <bits/stdc++.h>

using namespace std;

int main()
{
    freopen("SOMAX.inp","r",stdin);
    freopen("SOMAX.out","w",stdout);
    int so,ma;
    cin>>so;
    ma=so;
    while(cin>>so)
        if(so>ma) ma=so;
    cout<<ma;
    return 0;
}
