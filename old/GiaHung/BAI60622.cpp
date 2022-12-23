n#include <bits/stdc++.h>

using namespace std;

int main()
{
    //freopen("BAI60522.INP","r",stdin);
    //freopen("BAI60522.OUT","w",stdout);
    long long n;
    cin>>n;
    for(int i=2;i<=n;i++)
    while(n%i==0){
        cout<<i<<" ";
        n=n/i;
    }
    return 0;
}
