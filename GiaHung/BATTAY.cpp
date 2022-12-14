#include <bits/stdc++.h>

using namespace std;

int main()
{
    int a,b,c=0;
    freopen("BATTAY.INP","r",stdin);
    freopen("BATTAY.OUT","w",stdout);
    cin>>a;
    b=a*30-1;
    for (int i=1;i<=b;i++){
        c=c+i;
    }
    cout<<c;
    return 0;
}
