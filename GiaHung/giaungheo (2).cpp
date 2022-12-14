#include <bits/stdc++.h>
using namespace std;
int main()
{
    freopen("giaungheo.inp","r",stdin);
    freopen("giaungheo.out","w",stdout);
    int a,tonguoc=0;
    cin>>a;
    for(int i=1;i<=a/2;i++)
        if(a%i==0) tonguoc=tonguoc+i;
    if(tonguoc>a) cout<<"RICH";
    else cout<<"POOR";
    return 0;
}
