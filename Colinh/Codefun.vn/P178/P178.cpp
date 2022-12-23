#include <bits/stdc++.h>
using namespace std;
int A[100001];
int f[100001];
int main()
{
    int n;
    cin>>n;
    for(int i=1;i<=n;i++)
    {
        cin>>A[i];
    }
    f[1]=1;
    for(int i=2;i<=n;i++)
    {
        if(A[i]>A[i-1])
        {
            f[i]=f[i-1]+1;
        }
        else if(A[i-1]>A[i])f[i]=1;
    }
    sort(f,f+n+1);
    cout<<f[n];
    
}
