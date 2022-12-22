#include <bits/stdc++.h>
int A[1000000];
using namespace std;
bool boolen(int n, int A[], int m)
{
    for(int i=1;i<=m;i++)
    {
        if(A[i]==n)return true;
    }
    return false;
}
int main()
{
    freopen("SQUARES.INP","r",stdin);
    freopen("SQUARES.OUT","w",stdout);
    int n,m,x;
    int dem=0,dem1=0;
    cin>>n>>m>>x;
    for(int i=1;i<=m;i++)cin>>A[i];
    for(int i=x;i<=n;i++)
    {
        if(boolen(i, A, m)==1)
        dem++;
    }
    for(int i=1;i<=x;i++)
    {
        if(boolen(i, A, m)==1)
        dem1++;
    }
    cout<<min(dem1, dem);
    return 0;
}
