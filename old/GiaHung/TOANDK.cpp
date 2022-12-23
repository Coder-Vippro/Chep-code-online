#include <bits/stdc++.h>

using namespace std;

int main()
{
    //freopen("TOANDK.inp","r",stdin);
   // freopen("TOANDK.out","w",stdout);
    float a,b;
    cin>>a>>b;
    if(a>b)cout<<a-b;
   else cout << fixed << setprecision(2)<<a/b;
    return 0;
}
