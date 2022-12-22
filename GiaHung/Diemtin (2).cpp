#include <bits/stdc++.h>
using namespace std;
int main()
{
    freopen("Diemtin.inp","r",stdin);
    freopen("Diemtin.out","w",stdout);
    double a,b,c,d,t;
    cin>>a>>b>>c>>d;
    t=(a+b+(c*2)+(d*3))/7;
    if(t>=8 ) cout << "GIOI";
    else if(t>=6.5) cout<<"KHA";
    else if(t>=5) cout<<"TRUNG BINH";
    else cout<<"YEU";
    return 0;
}
