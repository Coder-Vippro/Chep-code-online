#include <bits/stdc++.h>
using namespace std;
int main()
{
    freopen("dem_dia.inp","r",stdin);
    freopen("dem_dia.out","w",stdout);
    int n,a,b,dem=0;
    cin>>n>>a>>b;
    while(n>0)
    {
        dem++;
        n=n-a;
      a=a+b;
    }
    cout<<dem;
    return 0;
}
