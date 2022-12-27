#include <iostream>
#include <cstdio>
#include <algorithm>
using namespace std;
int A[1000001];
int n;
int dem=0;
int vt;
int main()
{
    freopen("BOOKSORT.INP","r",stdin);
    freopen("BOOKSORT.OUT","w",stdout);
    cin>>n;
    for(int i=1;i<=n;i++)
    {
        cin>>A[i];
    }
    for(int i=n;i>=1;i--)
    {
        if(A[i]==n-dem)
        dem++;
    }
    cout<<n-dem;
}