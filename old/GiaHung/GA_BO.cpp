
#include <bits/stdc++.h>

using namespace std;

int main()
{
    freopen("GA_BO.inp","r",stdin);
    freopen("GA_BO.out","w",stdout);
    long long m,n,g,b;
    cin>>m>>n;
    if((n-2*m)%2>0){cout<<-1;return 0;}
   b=(n-2*m)/2;g=m-b;
   cout<<b<<' '<<g;
    return 0;
}
