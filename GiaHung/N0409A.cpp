#include <bits/stdc++.h>
using namespace std;
int main()
{
    freopen("N0409A.inp","r",stdin);
    freopen("N0409A.out","w",stdout);
    long long n,s=0;
    cin>>n;
    for(int i=1;i<=n;i++){
        cin>>n;if(n>=500&&n<=3000)s++;
    }
    cout<<s;
    return 0;
}
