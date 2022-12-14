#include <bits/stdc++.h>

using namespace std;

int main()
{
    freopen("DEM_MUA.inp","r",stdin);
    freopen("DEM_MUA.out","w",stdout);
    char kt;
    int dem=0;
    for(int i=1;i<=7;i++)
      {
            cin>>kt;
            if(kt=='1') dem++;
       }
    cout<<dem;
    return 0;
}
