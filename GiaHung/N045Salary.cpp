#include <bits/stdc++.h>

using namespace std;

int main()
{
    freopen("N045Salary.inp","r",stdin);
    freopen("N045Salary.out","w",stdout);
    double s,n;
    cin>>n;
    cout<<fixed<<setprecision(2);
    if(n<1500) cout<<n+n/10+n/10*9;
    else if(n>=1500) cout<<n+500+n/100*98;
    return 0;
}
