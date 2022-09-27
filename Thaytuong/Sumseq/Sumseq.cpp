#include <bits/stdc++.h>

using namespace std;
int A[1000001];
int kq[1000001];
int n;
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
        if(kq[i-1]>0)
            kq[i]=kq[i-1]+A[i];
        else kq[i]=A[i];
    }
    int maxx=-1e9;
    int temp2;
    int temp3=1;
    for(int i=2;i<=n;i++)
    {
        if(maxx<kq[i])
            {
                maxx=kq[i];
                temp2=i;
            }
    }
    int temp4=maxx;
    for(int i=temp2;i>0;i--)
    {
        maxx=maxx-A[i];
        if(maxx==0)
        {
            temp3=i;
            break;
        }
    }
    cout<<temp3<<'\n';
    cout<<temp2<<'\n';
    cout<<temp4<<'\n';

    return 0;
}
