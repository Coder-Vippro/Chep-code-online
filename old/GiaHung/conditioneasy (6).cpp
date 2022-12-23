#include <bits/stdc++.h>

using namespace std;

int main()
{
    freopen("conditioneasy.inp","r",stdin);
    freopen("conditioneasy.out","w",stdout);
    int a,b,c,d;
    cin>>a>>b>>c>>d;
    if(b>c && d>a && c+d>a+b && a%2==0) cout<<"YES";
    else cout<<"NO";
    return 0;
}
