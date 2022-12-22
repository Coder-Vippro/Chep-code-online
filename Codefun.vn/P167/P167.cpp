#include <bits/stdc++.h>
using namespace std;
int A[10001];
int main()
{
    int n;
    cin>>n;
    for(int i=1;i<=n;i++)
    {
        cin>>A[i];
    }
    sort(A,A+n+1);
    cout<<A[2]<<' '<<A[n-1];

}