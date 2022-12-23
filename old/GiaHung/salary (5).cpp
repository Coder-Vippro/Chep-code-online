#include <bits/stdc++.h>

using namespace std;

int main()
{
    freopen("salary.inp","r",stdin);
    freopen("salary.out","w",stdout);
    int n;
    cin>>n;
    if(n<=400) cout<<setprecision(2)<<fixed<<n*1.15;
    else if(n<=800) cout<<setprecision(2)<<fixed<<n*1.12;
    else if(n<=1200) cout<<setprecision(2)<<fixed<<n*1.1;
    else if(n<=2000) cout<<setprecision(2)<<fixed<<n*1.07;
    else cout<<setprecision(2)<<fixed<<n*1.04;
    return 0;
}
