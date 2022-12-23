#include <bits/stdc++.h>
using namespace std;
int main()
{
    freopen("DIEM.inp","r",stdin);
    freopen("DIEM.out","w",stdout);
    double a,b,c,t;
    cin>>a>>b>>c;
    t=(a*2+b+c)/4;
    if(t>=8 ) cout << "G";
    else if(t>=6.5) cout<<"Kh";
    else if(t>=5) cout<<"TB";
    else if(t>=3.5) cout<<"Y";
    else cout<<"K";
    return 0;
}
