#include <bits/stdc++.h>
using namespace std;
int main()
{
    freopen("N0114B.inp", "r", stdin);
    freopen("N0114B.out", "w", stdout);
    long long a,b;
    cin>>a>>b;
    cout<<a/b<<endl<<a%b<<endl<<fixed<<setprecision(2)<<(double)a/b;
    return 0;
}
