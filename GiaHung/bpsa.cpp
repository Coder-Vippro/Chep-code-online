#include <bits/stdc++.h>

using namespace std;

int main()
{
    int N;
    freopen("QMOBILE.INP","r",stdin);
    freopen("QMOBILE.OUT","w",stdout);
    int m,n,p;
    cin>>m>>n>>p;
    if (m<0) cout<<m*m;
    else cout<<m*m*m<<" ";
    if (n<0) cout<<n*n;
    else cout<<n*n*n<<" ";
    if (p<0) cout<<p*p;
    else cout<<p*p*p;
    return 0;
}
