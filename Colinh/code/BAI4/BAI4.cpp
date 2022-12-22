#include <bits/stdc++.h>

using namespace std;
int A[100001];
int n;
int main()
{
    cin>>n;
    for(int i=1;i<=n;i++)
    {
        cin>>A[i];
    }
    sort(A,A+n+1);
    for(int i=1;i<=n;i++)
    {
        cout<<A[i]<<' ';
    }
    return 0;
}
