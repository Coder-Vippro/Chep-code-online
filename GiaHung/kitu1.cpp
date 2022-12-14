#include <bits/stdc++.h>

using namespace std;

int main()
{
    freopen("kitu.inp","r",stdin);
    freopen("kitu.out","w",stdout);
    char kt;
    cin>>kt;
    if('a'<=kt && kt <='z') cout<<char(kt-32);
    else if('0'<=kt && kt<='9') cout<<kt-0;
    else if('A'<=kt && kt<='Z') cout<<kt;
    return 0;
}
