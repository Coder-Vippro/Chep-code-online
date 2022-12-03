#include <bits/stdc++.h>
using namespace std;
int A[100001];
int main()
{
    freopen("SQUARES.INP","r",stdin);
    freopen("SQUARES.OUT","w",stdout);
    int n,m,x,k;
    cin>>n>>m>>x;
    memset(A,0,n-2);
    for(int i=1;i<n-1;i++)
    {
        if(i!=x && i!=n)
        {
            cin>>k;
            A[i]=k;
        }
    }
    n=n-2;
    if(n-x<x-1)
    {
        cout<<n-x;
    }
    else cout<<(x-1);
}