#include <bits/stdc++.h>
using namespace std;
int main()
{
    //freopen("MOD.INP","r",stdin);
    //freopen("MOD.OUT","w",stdout);
    long long n;
    cin>>n;
    n=abs(n);
    cout<<n%1000/100<<n%100/10<<n%10;
}