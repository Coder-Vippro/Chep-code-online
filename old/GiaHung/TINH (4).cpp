#include <bits/stdc++.h>

using namespace std;
long long n;
long long A[1000001];
long long Min=0;
long long tong=0;
int main()
{
    freopen("TINH.INP","r",stdin);
    freopen("TINH.OUT","w",stdout);
    cin>>n;
    for(long long i=1;i<=n;i++)
        {
            cin>>A[i];
            if((A[i]-0-i)>0)
            Min=Min+(A[i]-0-i);
        else if((A[i]-0-i)<0)
            Min=Min+(-1*(A[i]-0-i));
        }
    for(long long i=1;i<=n;i++)
    {
        for(long long j=1;j<=n;j++)
        if((A[j]-i-j)>0)
            tong=tong+(A[j]-i-j);
        else if((A[j]-i-j)<0)
            tong=tong+(-1*(A[j]-i-j));
            if(Min>tong)
            Min=tong;
    }
    cout<<Min;
    return 0;
}
