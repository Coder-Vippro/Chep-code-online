#include <bits/stdc++.h>

using namespace std;

int main()
{
    freopen("RoundedBill.inp","r",stdin);
    freopen("RoundedBill.out","w",stdout);
    int c,k,nguyen,du;
    cin>>c>>k;
    nguyen=c/k;du=c%k;
    if(du>=k/2) nguyen++;
    cout<<nguyen*k;
    return 0;
}
