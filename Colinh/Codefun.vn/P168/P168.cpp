#include <bits/stdc++.h>
using namespace std;
int A[1000001];
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
    int dem=0;
    for(int i=1;i<=n;i++)
    {
        if(A[i]==x)
        dem++;
    }
    cout<<dem;
}