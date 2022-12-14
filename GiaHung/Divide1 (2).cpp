#include <bits/stdc++.h>
using namespace std;
int main()
{
    freopen("divide1.inp","r",stdin);
    freopen("divide1.out","w",stdout);
    int a,b,d;
    cin>>a>>b;
    d=(b-a)/3;
    if(a%3==0 || b%3==0) d++;
    cout<<d;
    return 0;
}
