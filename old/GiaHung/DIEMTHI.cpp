#include <bits/stdc++.h>
using namespace std;
int main()
{
 freopen("DIEMTHI.inp","r",stdin);
 freopen("DIEMTHI.out","w",stdout);
 float a,b,c;
 cin>>a>>b>>c;
 float s=a+b+c;
 cout<<fixed<<setprecision(2)<<s<<' '<<s/3<<' '<<(s>=20);
 return 0;
}
