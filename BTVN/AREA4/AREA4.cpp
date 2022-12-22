#include <bits/stdc++.h>
using namespace std;
const double p=3.14;
int main()
{
    freopen("AREA4.inp","r",stdin);
    freopen("AREA4.out","w",stdout);
    double a,b,c;
    cin>>a>>b>>c;
    double bk=sqrt(c*c-((b-a)/2)*((b-a)/2))/4;
    cout<<fixed<<setprecision(2)<<(a+b)*sqrt(c*c-((b-a)/2)*((b-a)/2))/2-bk*bk*p;

}