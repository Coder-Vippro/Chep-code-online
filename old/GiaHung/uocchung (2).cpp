#include <bits/stdc++.h>
using namespace std;
int main()
{
    freopen("uocchung.inp","r",stdin);
    freopen("uocchung.out","w",stdout);
    int a,b,c;
    cin>>a>>b;
    c=min(a,b);
    for(int i=1;i<=c;i++)
    if(a%i==0 && b%i==0) cout<<i<<" ";
    return 0;
}
