#include <bits/stdc++.h>
using namespace std;
int main()
{
    freopen("Bai03.inp","r",stdin);
    freopen("Bai03.out","w",stdout);
    int n,m,d=0;
    cin>>n>>m;
    if(n<m){
    for(int i=n;i<=m;i++){
            if(i%2!=0)d++;
    }
    }
    else{
         for(int i=m;i<=n;i++){
            if(i%2==0)d++;
    }
    }
    cout<<d;
    return 0;
}
