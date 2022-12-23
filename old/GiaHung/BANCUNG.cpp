#include <bits/stdc++.h>
using namespace std;
int main()
{
   freopen("BANCUNG.inp", "r", stdin);
    freopen("BANCUNG.out", "w", stdout);
   long long a,n,s=1;
    cin>>n;
    for(int i=1;i<=n;i++){
    cin>>a;
    s=a*s/__gcd(s,a);
    }
    cout<<s;
    return 0;
}

