#include <bits/stdc++.h>
using namespace std;
double n,k;
int main()
{
    
    freopen("BTHUC.inp","r",stdin);
    freopen("BTHUC.out","w",stdout);
    cin>>n>>k;
    cout<<fixed<<setprecision(3)<<n+k<<'\n';
    cout<<fixed<<setprecision(3)<<n-k<<'\n';
    cout<<fixed<<setprecision(3)<<n*k<<'\n';
    if(k==0)
    cout<<-1;
    else cout<<fixed<<setprecision(3)<<n/k;

}