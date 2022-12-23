#include <bits/stdc++.h>
using namespace std;

int main()
{
    freopen("Salary.inp","r",stdin);
    freopen("Salary.out","w",stdout);
    double n;
    cin>>n;
    if(n<=400) cout<<fixed<<setprecision(2)<<n*1.15;
    else if(n<=800) cout<<fixed<<setprecision(2)<<n*1.12;
    else if(n<=1200) cout<<fixed<<setprecision(2)<<n*1.1;
    else if(n>=2000) cout<<fixed<<setprecision(2)<<n*1.07;
    else cout<<fixed<<setprecision(2)<<n*1.04;
    return 0;
}
