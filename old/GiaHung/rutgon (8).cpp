#include <bits/stdc++.h>
using namespace std;
int main()
{
    freopen("rutgon.inp","r",stdin);
    freopen("rutgon.out","w",stdout);
    long long a,b,ucln;
    cin>>a>>b;
    ucln=1;
    for(int i=1;i<=a;i++)
    if(a%i==0 && b%i==0) ucln=i;
    cout<<a/ucln<<" "<<b/ucln;
    return 0;
}
