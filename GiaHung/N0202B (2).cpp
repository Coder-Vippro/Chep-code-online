#include <bits/stdc++.h>

using namespace std;

int main()
{
    freopen("N0202B.inp","r",stdin);
    freopen("N0202B.out","w",stdout);
    int n;
    cin>>n;
    if(10<=n && n<100 && n%10==n/10)
        cout<<"YES";
    else cout<<"NO";
    return 0;
}
