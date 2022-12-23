#include<bits/stdc++.h>
using namespace std;
int A[10001];
int n;
int k;
long long s;
long long smax;
int main()
{
    cin>>n>>k;
    for(int i=1;i<=n;i++)
    {
        cin>>A[i];
    }
    for(int i=1;i<=k;i++)
    {
        s=s+A[i];
    }
    smax=s;
    for(int i=k+1;i<=n;i++)
    {
        s=s-A[i-k]+A[i];
        smax=max(smax,s);
    }
    cout<<s<<endl;
}