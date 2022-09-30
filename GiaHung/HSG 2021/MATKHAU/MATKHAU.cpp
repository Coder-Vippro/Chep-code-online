#include <bits/stdc++.h>

using namespace std;
int n;
int A[100001];
int main()
{
    cin>>n;
    int dem=0;
    for(int i=1;i<=n;i++)
    {
        cin>>A[i];
    }
    for(int i=1;i<=100000001;i++)
    {
        for(int j=1;j<=n;j++)
    {
        if(i%A[j]==0 && i>A[j])
            cout<<A[i];
    }
    if(dem==n)
        {
            cout<<i;
            return 0;
        }
    }
    return 0;
}
