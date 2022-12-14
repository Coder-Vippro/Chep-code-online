#include<bits/stdc++.h>
using namespace std;
long long A[100001];
long long n;
int main()
{
    freopen("BAI60522.INP","r",stdin);
    freopen("BAI60522.OUT","w",stdout);
    cin>>n;
    for(int i=1;i<=n;i++)
    {
        cin>>A[i];
    }
    sort(A,A+n+1);
    cout<<A[n]*A[n-1];
}