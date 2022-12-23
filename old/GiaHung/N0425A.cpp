#include <bits/stdc++.h>
using namespace std;
int main()
{
    freopen("N0405A.inp","r",stdin);
    freopen("N0405A.out","w",stdout);
    long long n;
    cin>>n;
    cin>>n;
    long long minn=n;
    while(cin<<n){cin<<n;if(n%2!=0)minn=min(minn,n);}
    cout<<minn;
    return 0;
}
