#include <bits/stdc++.h>

using namespace std;
int A[1000001];
int kq[1000001];
int n;
int k=2;
int main()
{
    //freopen("Sumseq.INP","r",stdin);
    //freopen("Sumseq.OUT","w",stdout);
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
    cin>>n;
    for(int i=1;i<=n;i++)
    {
        cin>>A[i];
    }
    kq[1]=A[1];
    for(int i=2;i<=n;i++)
    {
        if(kq[k-1]+A[i]>0)
            {kq[i]=kq[k-1]+A[i];k++;}
        else {kq[i]=A[i];k++;}
    }
    int maxx=-1e9;
    for(int i=2;i<=k;i++)
    {
        if(maxx<kq[i] && i%2==0)
            {
                maxx=kq[i];
            }
    }
    cout<<maxx;
    return 0;
}
