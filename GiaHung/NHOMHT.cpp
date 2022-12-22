#include <bits/stdc++.h>

using namespace std;
int A[1000001];
int n;
int main()
{
    cin>>n;
    int dem=1;
    for(int i=1;i<=n;i++)
    {
        cin>>A[i];
    }
    sort(A,A+n+1);
    for(int i=1;i<=n;i++)
    {
        if(A[i]!=A[i+1])
            dem++;
    }
    cout<<dem;
    return 0;
}
