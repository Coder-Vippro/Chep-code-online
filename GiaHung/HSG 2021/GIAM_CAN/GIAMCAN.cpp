#include <bits/stdc++.h>

using namespace std;
long long A[100000001];
int main()
{
//freopen("Giamcan.inp","r",stdin);
//freopen("Giamcan.out","w",stdout);
    long long n;
    cin>>n;
    long long a;
    cin>>a;

    for(int i=1;i<=n;i++)
        cin>>A[i];
    long long Max=A[2]-A[1];
    for(int i=1;i<=n;i++)
    if(A[i+1]-A[i]>Max)
    Max=A[i+1]-A[i];
    cout<<Max/2;
    return 0;
}
