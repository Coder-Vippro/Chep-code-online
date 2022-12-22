#include <bits/stdc++.h>
using namespace std;
int main()
{
    freopen("SOSANH.inp","r",stdin);
    freopen("SOSANH.out","w",stdout);
    int a,b;
    cin>>a>>b;
    if(a<b) cout<<"<";
    else if(a>b) {
    cout<<">";
    }
    else cout<<"=";
    return 0;
}
