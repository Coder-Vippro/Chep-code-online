#include <bits/stdc++.h>

using namespace std;

int main()
{
    freopen("DEMSO.inp","r",stdin);
    freopen("DEMSO.out","w",stdout);
    int n,a,d=0;cin>>n;
    for(int i=1;i<=n;i++){
        cin>>a;
        if(a%3==0&&a%9!=0)d++;
    }
    cout<<d;
    return 0;
}
