#include <bits/stdc++.h>

using namespace std;
int A[100001];
int B[100001];
int tong=0;
int main()
{
    int n;
    cin>>n;
    for(int i=1;i<=n;i++)
    {
        cin>>A[i];
    }
    for(int i=2;i<=n;i++)
    {
        if(A[i]-A[i-1]<=5 &&A[i]-A[i-1]>=0 && A[i+1]-A[i]<=5)
            {
                B[i]=A[i];
                B[i-1]=A[i-1];
                i=i+1;
            }
        else if(A[i-1]-A[i]<=5 && A[i-1]-A[i]>=0 && A[i+1]-A[i]<=5)
            {
                B[i]=A[i];
                B[i-1]=A[i-1];
                i=i+1;

            }
    }
    for(int i=0;i<=n+1;i++)
    cout<<B[i]<<" ";
    return 0;
}
