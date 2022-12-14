#include <bits/stdc++.h>
using namespace std;
int main()
{
    freopen("N0415A.inp","r",stdin);
    freopen("N0415A.out","w",stdout);
    long long n,s=0;
    cin>>n;
    for(int i=1;i<=n;i++){
        cin>>n;if(n%2==1)s=s+n;
    }
    cout<<s;
    return 0;
}
