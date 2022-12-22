#include <bits/stdc++.h>
#define ll long long
using namespace std;
ll a,b,c;
int main()
{
    freopen("AREA3.inp","r",stdin);
    freopen("AREA3.out","w",stdout);
    cin>>a>>b>>c;
    cout<<a*b-(a*c+b*c-c*c);
}