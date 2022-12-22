#include <bits/stdc++.h>
using namespace std;
int A[10001];
int main()
{
    int n,k;
    
    cin>>n>>k;
    for(int i=0; i<n; i++)
    {
        cin>>A[i];
    }
    for(int i=0; i<n; i++) 
    {
        for(int j=0; j<=n; j++)
        {
            if(A[i]+A[j]==k & i!=j)
            {cout<<i<<" "<<j;break;}
        }

    }
}