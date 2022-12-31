#include <iostream>
#include <cstdio>
#include <algorithm>
using namespace std;
int A[1000001];
int x;
int dem=0;
int main()
{
    freopen("FRIEND.INP","r",stdin);
    freopen("FRIEND.OUT","w",stdout);
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
    int n;
    cin>>n>>x
    for(int i=1;i<=n;i++)
    {
        cin>>A[i];
    }
    for(int i=1;i<=n;i++)
    {
        for(int j=1;j<i;j++)
        {
            if(A[i]+A[j]==x)
            dem++;
        }
    }
    cout<<dem;
}