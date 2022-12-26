#include <iostream>
#include <cstdio>
#include <algorithm>
using namespace std;
int A[100001];
int n,k;
int nho=0;
int dem=0;
int main()
{
    freopen("DEMCAP.INP","r",stdin);
    freopen("DEMCAP.OUT","w",stdout);
    cin>>n>>k;
    for(int i=1;i<=n;i++)
    {
        cin>>A[i];
    }
    for(int i=1;i<=n;i++)
    {
        for(int j=1;j<=n;j++)
        {
            if(A[i]+A[j]==k && i!=j && i>j)
            dem++;
            
        }
    }
    cout<<dem;
}