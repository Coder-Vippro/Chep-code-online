#include <bits/stdc++.h>

using namespace std;

int main()
{
    freopen("nto.inp","r",stdin);
    freopen("nto.out","w",stdout);
    int n,i,d=0;
    cin>>n;
    for(i=1;i<=n;i++)
    {
       if(n%i==0){d++;}
    }
    if(d==2)cout<<"YES"; else cout<<"NO";
    return 0;
}
