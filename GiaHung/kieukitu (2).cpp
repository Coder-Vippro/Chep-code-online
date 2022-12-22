#include <bits/stdc++.h>

using namespace std;

int main()
{
    freopen("kieukitu.inp","r",stdin);
    freopen("kieukitu.out","w",stdout);
    char kt;
    cin>>kt;
    if( 'a'<=kt && kt <='z') cout<<"Thuong";
    else if( 'A'<=kt && kt<='Z') cout<<"HOA";
    else if( '0'<=kt&& kt<='9') cout<<"Chu so";
    return 0;
}
