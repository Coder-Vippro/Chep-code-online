#include <bits/stdc++.h>
using namespace std;
int main()
{
    freopen("tachso.inp","r",stdin);
    freopen("tachso.out","w",stdout);
    int n;
    cin>>n;
    int a,b,c,d,ad,bc;
    a=n/1000;
    b=n/100%10;
    c=n/10%10;
    d=n%10;
    ad=a*10+d;
    bc=b*10+c;
    cout<<ad<<"+"<<bc<<"="<<ad+bc;
    return 0;
}
