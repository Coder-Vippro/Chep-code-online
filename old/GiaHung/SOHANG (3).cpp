#include <bits/stdc++.h>
using namespace std;
int main()
{
    freopen("sohang.inp","r",stdin);
    freopen("sohang.out","w",stdout);
    long long n;
    cin>>n;
    if(n<2) cout<<-1;
    else cout<<(n-1)/2;
    return 0;
}
