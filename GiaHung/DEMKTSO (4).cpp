#include <bits/stdc++.h>
using namespace std;
int main()
{
    freopen("demktso.inp","r",stdin);
    freopen("demktso.out","w",stdout);
    char kt;
    int dem=0;
    while(cin>>kt)
    if('0'<=kt&&kt<='9') dem++;
    cout<<dem;
    return 0;
}
