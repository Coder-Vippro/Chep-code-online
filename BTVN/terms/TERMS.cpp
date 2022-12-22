#include <bits/stdc++.h>
#define ll long long
using namespace std;
ll n,a,b,c,d;
int main()
{
    freopen("TERMS.inp","r",stdin);
    freopen("TERMS.out","w",stdout);
    cin>>n;
    a=n;
    b=(n-1)/2;
    c=n+1;
    d=n*n;
    cout<<(a-b+1)<<endl;
    cout<<(d-c+1);
}