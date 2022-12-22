#include <bits/stdc++.h>
using namespace std;
int A[4];
int main()
{
    freopen("COINS.INP","r",stdin);
    freopen("COINS.OUT","w",stdout);
    int h,k;
    cin>>h>>k;
    int n=3;
    cin>>A[1]>>A[2]>>A[3];
    sort(A,A+3+1);
    for(int i=0;i<=n;i++)
    {
        for(int j=0;j<=n;j++)
        {
            if((k-i*A[3]-j*A[2])%A[1]==0 && (k-i*A[3]-j*A[1])/A[2]+i+j==n && (k-i*A[3]-j*A[1])/A[2]>=0 && i>=0 && k>=0)
            {
                cout<<i+(k-i*5-j*1)/3+j;
                return 0;
            }
        }
    }
    cout<<"NO SOLUTION";

}