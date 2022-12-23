#include <bits/stdc++.h>

using namespace std;

int main()
{
    freopen("TRO_CHOI_COC.inp","r",stdin);
    freopen("TRO_CHOI_COC.out","w",stdout);
    long long a,b;
    cin>>a>>b;
    if(a%2==0 && b>1) cout<<b-1;
    else if(a%2==0 && b==1) cout<<b+1;
    else if(a%2!=0 && b<1) cout<<b+1;
    else cout<<b-1;
    return 0;
}
