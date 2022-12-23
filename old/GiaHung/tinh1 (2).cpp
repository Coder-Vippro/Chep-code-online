#include <bits/stdc++.h>

using namespace std;

int main()
{
    freopen("tinh.inp","r",stdin);
    freopen("tinh.out","w",stdout);
    int n,dem=0;
    cin>>n;
    int s =sqrt(n/3)
    for(int i=1;i<=s; i++)
        for(int j=i;j<=s; j++){
        int k=sqrt(n-i*i-j*j);
        if (k>=j&&k*k==n-i*i-j*j){
            cout<<i<<" "<<j<<" "<<k<<'\n';dem++;
}}
    cout<<dem;
 return 0;

}
