#include <bits/stdc++.h>
using namespace std;
int main()
{
    freopen("N0109B.inp", "r", stdin);
    freopen("N0109B.out", "w", stdout);
    long long a,s=0;
    cin>>a;
    for(int i=1;i<=2*a+1;i+=2)
    {
        s+=i;
    }
    cout<<s;
    return 0;
}
