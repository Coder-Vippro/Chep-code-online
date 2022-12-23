#include <bits/stdc++.h>
using namespace std;
bool Nto[5736397];
int main()
{
    //freopen("ONTINH03.inp","r",stdin);
    //freopen("ONTINH03.out","w",stdout);
    long long s=2,n;
    cin>>n;
    memset(Nto,1,5736397);
    for (int i=2;i<=5736397;i++)if(Nto[i]==1)for(int j=2*i;j<=5736397;j+=i)if(Nto[j]==1)Nto[j]=0;
    for(int i=3;i<=n;i++)if(Nto[i]==1)s=s+i;
    if(Nto[s]==1)cout<<s<<'\n'<<"YES";
    else cout<<s<<'\n'<<"NO";
    return 0;
}
