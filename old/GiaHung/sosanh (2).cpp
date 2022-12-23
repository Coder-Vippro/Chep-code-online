#include <bits/stdc++.h>

using namespace std;

int main()
{
    freopen("sosanh.inp","r",stdin);
    freopen("sosanh.out","w",stdout);
    int a,b;
    cin>>a>>b;
    if(a<b) cout<<"<";
    else if(a>b) cout<<">";
    else cout<<"=";
    return 0;
}
