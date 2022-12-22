#include <bits/stdc++.h>
using namespace std;
int A[1000001];
int tong=0;
int n,k;
int main()
{
    freopen("VANCHUYEN.INP","r",stdin);
    freopen("VANCHUYEN.OUT","w",stdout);
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    cin>>k>>n;
    for(int i=1;i<=n;i++)
    {
        cin>>A[i];
    }
    sort(A,A+n+1);
    for(int i=n;i>=1;i--)
    {
        if(tong<k && tong+A[i]<=k)
        {
            tong=tong+A[i];
        }
    }   
    cout<<tong;
}