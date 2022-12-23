#include <bits/stdc++.h>
using namespace std;
int main()
{
    freopen("Bai04.inp","r",stdin);
    freopen("Bai04.out","w",stdout);
    int n,k,m,s=0,d=0;
    cin>>n>>k>>m;
    while(s<n){
        s=s+k;
        k=k+m;
        d++;
    }
    cout<<d<<" "<<s;
    return 0;
}
