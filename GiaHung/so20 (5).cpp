#include <bits/stdc++.h>

using namespace std;

int main()
{
    freopen("so20.inp","r",stdin);
    freopen("so20.out","w",stdout);
    int n;
    cin>>n;
    if(n>20) cout<<n<<" lon hon 20";
    else for(int i=n;i<=20;i++) cout<<i<<" ";
    return 0;
}
