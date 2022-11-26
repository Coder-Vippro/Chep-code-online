#include <bits/stdc++.h>

using namespace std;
const int N=1e7;
int p[N+5];
long long a[N+5], f[N+5];
int main()
{ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
    freopen("SUMDIV.inp","r",stdin);
    freopen("SUMDIV.out","w",stdout);
    for(int i=1;i<=N;i++)p[i]=i;
    for(int i=2;i*i<=N;i++){
        if(p[i]==i)
        for(int j=2;i*j<=N;j++){
            if(p[i*j]==i*j)p[i*j]=i;
        }
    }
    long long n, k, s=0;
    cin>>n>>k;
    for(int i=1;i<=n;i++)cin>>a[i];
    int l, r;
    f[1]=p[a[1]]+1;
    for(int i=2;i<=N;i++){
        f[i]=f[i-1]+p[a[i]]+1;
    }
    while(k--){
        cin>>l>>r;
        cout<<f[r]-f[l-1]<<endl;
    }
    return 0;
}
