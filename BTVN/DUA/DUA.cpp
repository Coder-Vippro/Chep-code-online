#include <bits/stdc++.h>
using namespace std;
int A[100001];
int B[100001];
int main()
{
    freopen("DUA.INP","r",stdin);
    freopen("DUA.OUT","w",stdout);
    int n,h;
    cin>>h>>n;
    int minn;
    for(int i=1;i<=n;i++)
    {
        cin>>A[i];
    }
    sort(A,A+n+1);
    minn=A[1];
    int k=2;
    int tong=0;
    B[1]=A[1];
    for(int i=2;i<=h;i++)
    {
        if(A[i]!=A[i+1])
        {
            B[k]=A[i];
            if(minn>A[i])
            minn=A[i];
        }
        else B[k]=A[i+1];
        k++;
    }
    sort(B,B+k+1);
    for(int i=1;i<=k;i++)
    {
        if(B[i]!=B[i+1])
        tong=tong+B[i];
        cout<<B[i]<<' ';
    }
    cout<<tong-minn;
}