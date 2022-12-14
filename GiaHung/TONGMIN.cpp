#include <bits/stdc++.h>

using namespace std;

int main()
{
    freopen ("TONGMIN.inp","r",stdin);
    freopen ("TONGMIN.out","w",stdout);
    long long a,b,c;
    cin>>a>>b>>c;
    cout<<a+b+c-max(max(a,b),c);
    return 0;
}
