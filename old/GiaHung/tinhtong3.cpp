#include <bits/stdc++.h>

using namespace std;

int main()
{
    freopen("tinhtong3.inp","r",stdin);
    freopen("tinhtong3.out","w",stdout);
    long long b,c;
    cin>>b;
    if(b%2==0) b=b-1;
    c=(b-1)/2+1;
    cout<<(b+1)*c/2;
    return 0;
}
