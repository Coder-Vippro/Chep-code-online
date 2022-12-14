#include<bits/stdc++.h>

using namespace std;

int main()
{
    freopen("TBCHAN.inp","r",stdin);
    freopen("TBCHAN.out","w",stdout);
    int n,dem=0,t=0;
    cin >> n;
    for(int i=2;i<=n;i++){
        if(i%2==0){
           t=t+i;
           dem++;
        }}
        cout<<t/dem;
    return 0;
}
