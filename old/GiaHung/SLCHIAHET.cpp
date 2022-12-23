#include <bits/stdc++.h>
using namespace std;
int main()
{
    freopen("SLCHIAHET.inp","r",stdin);
    freopen("SLCHIAHET.out","w",stdout);
    int a,b,dem=0;
    cin>>a>>b;
    for(int i=1;i<=a;i++){
        if(i%b==0) dem++;
    }
    cout<<dem;
    return 0;
}
