#include <bits/stdc++.h>
using namespace std;
int main()
{
    freopen("DEMLE.inp","r",stdin);
    freopen("DEMLE.out","w",stdout);
    int n,m,dem=0;
    cin>>n>>m;
    for(int i=n ;i<=m;i++){
        if(i%2==1) dem++;
    }
    cout<<dem;
   return 0;
}
