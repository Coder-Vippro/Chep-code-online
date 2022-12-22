#include <bits/stdc++.h>

using namespace std;
int A[100001],B[100001];
int main()
{
    long long n;
    int dem=0;
    cin>>n;
    for (int i=1;i<=n;i++)cin>>A[i];
    sort(A,A+n+1);
    for (int i=1;i<=A[n];i++)B[i]=0;
    for (int i=1;i<=n;i++)B[A[i]]++;
    for (int i=1;i<=A[n];i++)if(B[i]>0&&B[i]%2!=0)dem++;
    cout<<dem;
    return 0;
}
