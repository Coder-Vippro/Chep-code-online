#include <bits/stdc++.h>
using namespace std;
int main()
{
    freopen("cung_chan_le.inp","r",stdin);
    freopen("cung_chan_le.out","w",stdout);
    long long a,b;
    cin>>a>>b;
    if((a+b)%2>0)cout<<"NO";
    else  cout<<"YES";
    return 0;
}
