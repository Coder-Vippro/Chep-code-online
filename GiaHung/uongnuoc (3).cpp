#include <bits/stdc++.h>

using namespace std;

int main()
{
    freopen("uongnuoc.inp","r",stdin);
    freopen("uongnuoc.out","w",stdout);
    int a,c;
    cin>>a;
    if(a<6) cout<<"BAN UONG THIEU NUOC";
    else if(a<=8) cout<<"BAN UONG DU NUOC";
    else cout<<"BAN UONG THUA NUOC";
    return 0;
}
