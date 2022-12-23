#include <bits/stdc++.h>

using namespace std;

int main()
{
    freopen("bacs.inp","r",stdin);
    freopen("bacs.out","w",stdout);
    int n;
    cin>>n;
    float t=(n/100)+(n/10%10)+(n%10);
    cout<<t<<" "<<fixed<<setprecision(2)<<t/3;
    return 0;
}
