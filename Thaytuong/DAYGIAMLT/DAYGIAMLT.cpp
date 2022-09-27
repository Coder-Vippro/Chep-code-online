#include <bits/stdc++.h>

using namespace std;
int A[100001];
int kq[100001];
int n;
int main()
{
    freopen("DAYGIAMLT.INP","r",stdin);
    freopen("DAYGIAMLT.OUT","w",stdout);
    //ios_base::sync_with_stdio(false);
    //cin.tie(0);
    //cout.tie(0);
    cin>>n;
    for(int i=1;i<=n;i++)
    {
        cin>>A[i];
    }
    kq[1]=1;
    for(int i=2;i<=n;i++)
    {
        if(A[i]<A[i-1]) kq[i]=kq[i-1]+1;
        else kq[i]=1;
    }
    int temp=kq[1];
    int temp2=1;
    for(int i=2;i<=n;i++)
    {
        if(temp<kq[i])
        {
            temp=kq[i];
            temp2=i;
        }
    }
    cout<<temp<<'\n';
    for(int i=temp2-temp+1;i<=temp2;i++)
    {
        cout<<A[i]<<' ';
    }


    return 0;
}
