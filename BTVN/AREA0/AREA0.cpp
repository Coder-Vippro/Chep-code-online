#include <bits/stdc++.h>
using namespace std;
const double p=3.14;
double a,b;
int main()
{
    freopen("AREA0.inp","r",stdin);
    freopen("AREA0.out","w",stdout);
    cin>>a>>b;
    cout<<fixed<<setprecision(2)<<a*b-(a/2)*(a/2)*p;
}