#include <bits/stdc++.h>
using namespace std;
int main()
{
    freopen("sodep.inp","r",stdin);
    freopen("sodep.out","w",stdout);
    int n;
    cin>>n;
    if(n==9) cout<<"YES";
    else if(n/10+n%10==9) cout<<"YES";
    else if(n/100+n/10%10+n%10==9) cout<<"YES";
    else cout<<"NO";
    return 0;
}
