#include <bits/stdc++.h>

using namespace std;

int main()
{
    freopen ("LENHWHILE.inp","r",stdin);
    freopen ("LENHWHILE.out","w",stdout);
    int n,k=1,s=0;
    cin>>n;
    while(s<n){
        s=s+k;
        k++;
    }
    cout<<k-2;
    return 0;
}
