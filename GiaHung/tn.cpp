#include <bits/stdc++.h>
using namespace std;
int A[100001];
int main()
{
    int n;
    cin>>n;
    
    for(int i=1;i<=n;i++)
    {
        cin>>A[i];
    }
    k=__gcd(A[1],A[2]);
    for(int i=3;i<=n;i++)
    {
        k=__gcd(k,A[i]);
    }
}