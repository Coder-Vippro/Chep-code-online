#include <bits/stdc++.h>
using namespace std;
int p,n,k;
int main()
{
    freopen("FORAGE.INP","r",stdin);
    freopen("FORAGE.OUT","w",stdout);
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
    cin>>p>>n>>k;
    long long tong=0;
    long long h=(n-1)/1+1;
    tong=((n+1)*h/2)*k;
    if(p<tong)
    {
        cout<<"NO"<<endl;
        cout<<tong-p;
    }
    else cout<<"YES";

}