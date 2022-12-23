#include <bits/stdc++.h>
using namespace std;
int main()
{
    freopen("rcsold.inp","r",stdin);
    freopen("rcsold.out","w",stdout);
    char kt;
    int d=0;
    while(cin>>kt)
      if(int(kt)%2!=0) d++;
    cout<<d;
    return 0;
}
