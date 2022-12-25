#include <iostream>
#include <cstdio>
#include <algorithm>
using namespace std;
int A[10001];
int n;
int dem=0;
int main()
{
    freopen("Soluong.INP","r",stdin);
    freopen("Soluong.OUT","w",stdout);
    cin>>n;
    for(int i=1;i<=n;i++)
    {
        cin>>A[i];
    }
    sort(A+1,A+n+1);
    for(int i=0;i<=n;i++)
    {
        if(A[i]!=A[i-1])dem++;
    }
    cout<<dem;
}
