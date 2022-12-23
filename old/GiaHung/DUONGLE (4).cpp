#include <bits/stdc++.h>
using namespace std;
int main()
{
    freopen("duongle.inp","r",stdin);
    freopen("duongle.out","w",stdout);
    long long n,s=0;
    cin>>n;
    if(n%2==0) n=n-1;
    n++;
    cout<<n*n/4;
    return 0;
}
