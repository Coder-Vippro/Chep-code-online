#include <bits/stdc++.h>
using namespace std;
int main()
{
    freopen("DRB.inp","r",stdin);
    freopen("DRB.out","w",stdout);
    long long s1,v1,s2,v2;
    cin>>s1>>v1>>s2>>v2;
   if((s1-s2)*(v1-v2)<0) cout<<abs((s2-s1)/(v1-v2));
    else cout<<-1;
    return 0;
}