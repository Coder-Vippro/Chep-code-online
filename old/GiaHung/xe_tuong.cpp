#include <bits/stdc++.h>
using namespace std;
int main()
{
    freopen("xe_tuong.inp","r",stdin);
    freopen("xe_tuong.out","w",stdout);
    long long a,b,c,d;
    cin>>a>>b>>c>>d;
    if(a==c||b==d) cout<<"ROOK";
    else if(abs(a-b)==abs(c-d)||(a+b==c+d)) cout<<"BISHOP";
    else cout<<"DRAW";
    return 0;
}
