#include <bits/stdc++.h>

using namespace std;

int main()
{
    freopen("BOI_THU_K.inp","r",stdin);
    freopen("BOI_THU_K.out","w",stdout);
    long long t,n,k,kq,ta,du;
    cin>>t;
    for(int i=1;i<=t;i++){
        cin>>n>>k;
        ta=k/(n-1);
        du=k%(n-1);
        if(du>0)kq=n*ta+du;
        else kq=n%ta-1;
        cout<<kq<<endl;
    }
    return 0;
}
