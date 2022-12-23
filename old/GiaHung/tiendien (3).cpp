#include <bits/stdc++.h>

using namespace std;

int main()
{
    freopen("tiendien.inp","r",stdin);
    freopen("tiendien.out","w",stdout);
    int a;
    cin>>a;
    if (0<=a<=50) cout<<a*1388;
    if (51<=a<=100) cout<<a*1433;
    if (101<=a<=200) cout<<a*1660;
    if (201<=a<=300) cout<<a*2082;
    if (301<=a<=400) cout<<a*2324;
    if (a>=401) cout<<a*2399;
    return 0;
}
