#include <bits/stdc++.h>

using namespace std;
long long n,k=1;
int ln(long long n)
{
    int m=0;
    while(n>0)
    {
        if(m<n%10) m=n%10;
        n=n/10;
    }
    return m;
}
int main()
{
    freopen("ONTAP1.INP","r",stdin);
    freopen("ONTAP1.OUT","w",stdout);
    cin>>n;
    int m=n*2;
    int x=sqrt(m);
    if(x*(x+1)==m) cout<<"YES"<<'\n';
    else cout<<ln(n)<<'\n';
    for(int i=1; i<=n; i++)
    {
        k=k*i;
        while(k%10==0) k=k/10;
        k=k%10;
    }
    cout<<k;
    return 0;
}
