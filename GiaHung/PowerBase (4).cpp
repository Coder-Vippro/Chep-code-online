#include <bits/stdc++.h>
using namespace std;
int main()
{
    freopen("PowerBase.inp","r",stdin);
    freopen("PowerBase.out","w",stdout);
    float x,p,s=1;
    cin>>x>>p;
    for(int i=1;i<=p;i++) s=s*x;
    cout<< fixed << setprecision(2)<<s;
    return 0;
}
