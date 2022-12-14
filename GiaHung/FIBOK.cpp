#include <bits/stdc++.h>
using namespace std;
int F(int n){
    if(n==1||n==2)return 1;
    return F(n-1)+F(n-2);
}
int main()
{
    freopen("FIBOK.inp","r",stdin);
    freopen("FIBOK.out","w",stdout);
    int a,n;
    cin>>n;
    for(int i=1;i<=n;i++){
    cin>>a;cout<<F(a)<<'\n';
    }
    return 0;
}
