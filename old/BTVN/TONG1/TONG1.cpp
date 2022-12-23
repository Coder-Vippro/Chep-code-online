#include <bits/stdc++.h>
#define ll long long
using namespace std;
ll a,b,c,d;
int main()
{
    freopen("TONG1.inp","r",stdin);
    freopen("TONG1.out","w",stdout);
    cin>>a>>b>>c>>d;
    cout<<a+b+c+d<<'\n';
    cout<<(a+b+c+d)/10%10<<' '<<(a+b+c+d)%10;
    
}