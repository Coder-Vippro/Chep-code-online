#include <bits/stdc++.h>
using namespace std;
int main()
{
    freopen("tg_vuong_can.inp","r",stdin);
    freopen("tg_vuong_can.out","w",stdout);
    int a,b,p;
    cin>>a;
    for(int i=1;i<=a;i++){
        cin>>b;
        b=2*b;
        p=sqrt(b);
        if(p*(p+1)==b) cout<<"YES"<<endl;
        else cout<<"NO"<<endl;
    }
    return 0;
}