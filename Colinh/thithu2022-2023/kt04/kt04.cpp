#include <bits/stdc++.h>
using namespace std;
int n;
int A[100001];
int dem=1;
int main()
{
    freopen("kt04.INP","r",stdin);
    freopen("kt04.OUT","w",stdout);
    cin>>n;
    int maxx=-1e9;
    for(int i=1;i<=n;i++)   
    {
        cin>>A[i];
        if(A[i]>maxx)
        {
            maxx=A[i];
            dem=1;
        }
        else if (A[i]==maxx)
        {
            dem++;
        }
    }
    cout<<dem<<'\n'<<maxx;
} 

