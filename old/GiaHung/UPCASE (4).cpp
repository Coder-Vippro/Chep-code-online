#include <bits/stdc++.h>

using namespace std;

int main()
{
    freopen ("UPCASE.inp","r",stdin);
    freopen ("UPCASE.out","w",stdout);
    char kt;
    cin>>kt;
    if(kt>='A' && kt<='Z') cout<<kt;
else if(kt>='a' && kt<='z') cout<<char(kt-32);
    return 0;
}
