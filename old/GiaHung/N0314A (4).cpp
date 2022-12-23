#include <bits/stdc++.h>

using namespace std;

int main()
{
    freopen("N0314A.inp","r",stdin);
    freopen("N0314A.out","w",stdout);
    int n,t=0,k=0;
    cin>>n;
    while(t<n) {k++;
    t=t+k;}
    if(t==n) cout<<k;
    else cout<<"NO";
    return 0;
}
