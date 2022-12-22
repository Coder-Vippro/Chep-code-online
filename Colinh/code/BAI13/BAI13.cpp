#include <bits/stdc++.h>
using namespace std;
int A[10001];
int n;
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
    cin>>n;
    for(int i=1;i<n;i++)
    {
        cin>>A[i];
    }
    sort(A,A+n+1);
    if(abs(A[2]-A[1])>abs(A[n]-A[n-1]))
    {
        cout<<abs(A[2]-A[1]);
    }
    else cout<<abs(A[n]-A[n-1]);
}