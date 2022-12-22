#include <bits/stdc++.h>
using namespace std;
int main()
{
    freopen("giaidau.inp","r",stdin);
    freopen("giaidau.out","w",stdout);
    char kt;
    int dem=0;
   for(int i=1;i<=6;i++)
      {
            cin>>kt;
            if(kt=='W') dem++;
       }
    if(dem>=5) cout<<1;
    else if(dem>=3) cout<<2;
           else  if(dem>=1) cout<<3;
                         else cout<<-1;
    return 0;
}
