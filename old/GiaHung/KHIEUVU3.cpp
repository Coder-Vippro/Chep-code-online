#include <iostream>

using namespace std;
int n,k;
int A[1000001];
int main()
{
    freopen("KHIEUVU3.INP","r",stdin);
    freopen("KHIEUVU3.OUT","w",stdout);
    cin>>n>>k;
    for(int i=1;i<=n;i++)
    {
        cin>>A[i];
    }
    int dem=0;
    for(int i=1;i<=n;i++)
        for(int j=1;j<=n;j++)
            if(A[i]-A[j]==k)
            dem++;
    cout<<dem;
    return 0;
}
