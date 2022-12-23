#include <bits/stdc++.h>
using namespace std;
bool nt[100001];
int f[100001];
int main()
{
    freopen("prime.inp","r",stdin);
    freopen("prime.out","w",stdout);
    int n,dem=0,a,b,sl=100001;
    for(int i=2;i<=sl;i++) {nt[i]=true;f[i]=0;}
    for(int i=2;i<=sl;i++)
    {
        int su=sl/i;
        for(int j=2;j<=su;j++) nt[i*j]=false;
    }
    f[2]=1;
    for(int i=3;i<=sl;i++)
        if(nt[i]) f[i]=f[i-1]+1;else f[i]=f[i-1];
    cin>>n;
    for(int i=1;i<=n;i++)
    {
        cin>>a>>b;
        cout<<f[b]-f[a-1]<<endl;
        dem=0;
    }
    return 0;
}
