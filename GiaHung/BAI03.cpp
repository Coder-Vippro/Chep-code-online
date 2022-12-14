#include <bits/stdc++.h>

using namespace std;

int main()
{
    freopen("BAI03.inp","r",stdin);
    freopen("BAI03.out","w",stdout);
    int n,dem=0;
    cin>>n;
    for(int z=1;z<=n;z++)
        for(int y=1;y<z;y++)
           for(int x=1;x<y;x++)
              if(x*x+y*y+z*z==n){
        cout<<x<<' '<<y<<' '<<z<<'\n';dem++;
    }
    cout<<dem;
    return 0;
}
