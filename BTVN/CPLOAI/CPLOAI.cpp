#include <bits/stdc++.h>
using namespace std;
int A[100001];
int n;
int TS[100001];
int main()
{
    freopen("abc.INP","r",stdin);
    freopen("abc.OUT","w",stdout);
    cin>>n;
    int dem=1;
    for(int i=1;i<=n;i++)
    {
        cin>>A[i];
    }
    sort(A,A+n+1);
    for(int i=2;i<=n;i++)
    {
        if(A[i]!=A[i-1])
        {dem++;}
    }
    cout<<dem<<endl;
    cout<<A[1]<<' ';
    for(int i=2;i<=n;i++)
    {
        if(A[i]!=A[i-1])
        {
            cout<<A[i]<<' ';
        }
    }
}