#include <iostream>
#include <cstdio>
#include <algorithm>
using namespace std;
int A[1000001];
int n;
int main()
{
    freopen("N0430A.INP","r",stdin);
    freopen("N0430A.OUT","w",stdout);
    cin>>n;
    for(int i=1;i<=n;i++)
    {
        cin>>A[i];
        if(A[i]<0)
        {
            cout<<0<<' ';
        }
        else cout<<A[i]<<' ';
    }
    return 0;
}