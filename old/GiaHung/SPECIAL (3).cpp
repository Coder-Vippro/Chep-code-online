#include <bits/stdc++.h>

using namespace std;
long long A[100000001];
int main()
{
    freopen("SPECIAL.INP","r",stdin);
    freopen("SPECIAL.OUT","w",stdout);
    long long n;
    cin>>n;
    for(int i=1;i<=n;i++)
    {
        cin>>A[i];
    }
    sort(A+1,A+n+1);
    for(int i=1;i<=n;i++)
        if(A[i]!=A[i+1])
        cout<<A[i];
        else i=i+1;

    return 0;
}
