#include <bits/stdc++.h>
using namespace std;
int n,K;
int main()
{
    freopen("ONTAP19.INP","r",stdin);
    freopen("ONTAP19.OUT","w",stdout);
    int vt;
    int maxx=-1e9+1;
    cin>>n>>k;
    for(int i=1;i<=n;i++)
    {
        cin>>A[i];
        if(A[i]>maxx)
        {
            maxx=A[i];
            vt=i;
        }
    }
    cout<<maxx<<' '<<vt<<'\n';
    cout<<A[k];
}