#include <bits/stdc++.h>
using namespace std;
int main()
{
    freopen("voting.inp","r",stdin);
    freopen("voting.out","w",stdout);
    char kt;
    int dem=0,dem1=0;
    while(cin>>kt)
         if(kt=='A') dem++; else dem1++;
    if(dem>dem1) cout<<"A";
    else if(dem<dem1) cout<<"B";
    else cout<<"Tie";
    return 0;
}
