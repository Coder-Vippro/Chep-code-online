#include <bits/stdc++.h>
using namespace std;
long long F(int n){
if(n==1||n==2)return 1;
else return F(n-1)+F(n-2);
}
int main()
{
    freopen("Bai03.inp","r",stdin);
    freopen("Bai03.out","w",stdout);
    int n;
    cin>>n;
    for(int i=1;i<=n;i++){
        cout<<F(i)<<'\n';
    }
    return 0;
}
