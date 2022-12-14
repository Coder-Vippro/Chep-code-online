#include <bits/stdc++.h>

using namespace std;

int main()
{
    freopen("TI_TEO.inp","r",stdin);
    freopen("TI_TEO.out","w",stdout);
    int a,b,k,x,y;
    cin>>a>>b>>k>>x>>y;
    int s=b-a+y*k,n=x+y;
    if(s%n==0)cout<<s/n;
    else cout<<-1;
    return 0;
}
