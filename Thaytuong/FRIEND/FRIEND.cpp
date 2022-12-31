#include <iostream>
#include <cstdio>
#include <algorithm>
using namespace std;
int A[1000001];
int dem=0;
int binarysearchdown(int i, int j, int key)
{
    int l=i,r=j;
    int kq=-1;
    while(l<=r)
    {
        int mid=(l+r)/2;
        if(A[mid]==key)
        {
            kq=mid;
            r=mid-1;
        }
        else if(A[mid]>key)
        {
            r=mid-1;
        }
        else l=mid+1;
    }
    return kq;
}
int binarysearchup (int i, int j, int key)
{
    int l=i,r=j;
    int kq=-1;
    while(l<=r)
    {
        int mid=(l+r)/2;
        if(A[mid]==key)
        {
            kq=mid;
            l=mid+1;
        }
        else if(A[mid]>key)
        {
            r=mid-1;
        }
        else l=mid+1;
    }
    return kq;
}
int main()
{
    freopen("FRIEND.INP","r",stdin);
    freopen("FRIEND.OUT","w",stdout);
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
    int n,x;
    cin>>n>>x;
    int key;
    for(int i=1;i<=n;i++)
    {
        cin>>A[i];
    }
    sort(A+1,A+n+1);
    for(int i=1;i<=n;i++)
    {
        key=x-A[i];
        int vtd=binarysearchdown(i+1,n,key);
        int vtc=binarysearchup(i+1,n,key);
        if(vtd>0)dem=dem+vtc-vtd+1;
    }
    cout<<dem;
}