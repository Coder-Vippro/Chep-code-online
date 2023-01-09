#include <iostream>
#include <algorithm>
using namespace std;
bool cmp(int a,int b)
{
    return a>b;
}
int cong=0;
int A[100001];
int dem=1;
int main()
{
    freopen("cmp.INP","r",stdin);
    freopen("cmp.OUT","w",stdout);
    int n;
    cin>>n;
    for(int i=1;i<=n;i++)
    {
        cin>>A[i];
    }
    sort(A+1,A+n+1,cmp);
    for(int i=1;i<=n;i++)
    {
        if(A[i]>A[i+1])dem++;
    }
    cout<<dem;
    
}