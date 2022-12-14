#include <bits/stdc++.h>
using namespace std;
int main()
{
    freopen("gapful.inp","r",stdin);
    freopen("gapful.out","w",stdout);
    long long n,csd,csc;
    cin>>n;
    csd= n%10;
    csc=n;
    while(csc>=10) csc=csc/10;
    int so=csc*10+csd;
    if(n<100||n%so>0) cout<<"NO";
    else cout<<"YES";
    return 0;
}
