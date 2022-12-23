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
    int x;
    cin>>x;
    sort(A,A+n+1);
    for(int i=1;i<=n;i++)
    {
        if(A[i]==x)
        {
            cout<<i;
            return 0;
        }
    }
}