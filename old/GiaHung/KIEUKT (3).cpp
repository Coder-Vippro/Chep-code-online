#include <bits/stdc++.h>

using namespace std;

int main()
{
    freopen ("KIEUKT.inp","r",stdin);
    freopen ("KIEUKT.out","w",stdout);
    char kt;
    cin>>kt;
    if('a'<=kt && kt <='z') cout<<char(kt-32);
    else if('A'<=kt && kt<='Z') cout<<kt;
    return 0;
}
