#include <iostream>
#include <cstdio>
#include <algorithm>
using namespace std;
int A[1000001];
int dem=0;
int binarysearch (int i, int j, int key)
{
    int l=i,r=j;
    while(l<=r)
    {
        int mid=(l+r)/2;
        if(A[mid]==key)
        return mid;
        else if(A[mid]>key)
        {
            r=mid-1;
        }
        else l=mid+1;
    }
    return -1;
}
int main()
{
    freopen("SUMX.INP","r",stdin);
    freopen("SUMX.OUT","w",stdout);
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
    int n;
    cin>>n;
    int key;
    for(int i=1;i<=n;i++)
    {
        cin>>A[i];
    }
    int x;cin>>x;
    sort(A+1,A+n+1);
    for(int i=1;i<=n;i++)
    {
        key=x-A[i];
        if(binarysearch(i+1,n,key)!=-1)
        {
            dem++;
        }
    }
    cout<<dem;
}