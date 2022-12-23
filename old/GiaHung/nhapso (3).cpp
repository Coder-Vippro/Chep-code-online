#include <bits/stdc++.h>
using namespace std;
int main()
{
    freopen("nhapso.inp","r",stdin);
    freopen("nhapso.out","w",stdout);
    double n;
    cin>>n;
    int m=int(n);
    if(n>m) cout<<int(n);
    else if(m%2==0) cout<<n<<" la so chan";
    else cout<<n<<" la so le";
    return 0;
}
