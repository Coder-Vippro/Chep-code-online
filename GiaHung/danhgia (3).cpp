#include <bits/stdc++.h>
using namespace std;
int main()
{
    freopen("danhgia.inp","r",stdin);
    freopen("danhgia.out","w",stdout);
    double a,b,c,t;
    cin>>a>>b>>c;
    t=(a+b+c)/3;
    cout<<fixed<<setprecision(2)<<t<<endl;
    if(t>=8) cout<<"Gioi";
    else if(t>=6) cout<<"Kha";
    else if(t>=5) cout<<"TB";
    else cout<<"Yeu";
    return 0;
}
