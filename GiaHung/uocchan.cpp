#include <bits/stdc++.h>
using namespace std;
int main()
{
    freopen("UOCCHAN.inp","r",stdin);
    freopen("UOCCHAN.out","w",stdout);
    int n;
    cin>>n;
    for(int i=1;i<=n;i++)
        if(n%i==0&& i%2==0) cout<<i<<" ";
    return 0;
}
