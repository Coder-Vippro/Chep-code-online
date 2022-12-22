#include <bits/stdc++.h>
using namespace std;
int main()
{
    freopen("quanma.inp","r",stdin);
    freopen("quanma.out","w",stdout);
    int a,b,c,d;
    cin>>a>>b>>c>>d;
    if((abs(a-c)==2 && abs (b-d)==1) || (abs(a-c)==1 && abs (b-d)==2))
        cout<<"YES";
    else cout<<"NO";
    return 0;
}