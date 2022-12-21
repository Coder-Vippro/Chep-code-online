#include <bits/stdc++.h>
using namespace std;
int A[10001];
int n;
int kq=0;
int main()
{
    freopen("BAI10.INP","r",stdin);
    freopen("BAI10.OUT","w",stdout);
    cin>>n;
    for(int i=1;i<=10;i++)
    {
        cin>>A[i];
    }
    A[0]=0;
    while(n>=10)
    {
        kq=kq+A[10];
        n=n-10;
    }
    cout<<kq+A[n];
    return 0;
}