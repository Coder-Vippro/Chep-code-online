#include<bits/stdc++.h>

using namespace std;
long long tonguoc(long long n){
    int s=0;
for(int i=1;i<=n-1;i++)if(n%i==0)s=s+i;
return s;
}
int main()
{
    //freopen("UCLN.inp","r",stdin);
    //freopen("UCLN.out","w",stdout);
    long long n,m;cin>>n>>m;
    if(tonguoc(a)==b&&tonguoc(b)==a)cout<<"Co";
    else cout<<"KHONG";
    return 0;
}
