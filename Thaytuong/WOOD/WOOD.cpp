#include <iostream>
#include <cstdio>
#include <algorithm>
using namespace std;
int A[1000001];
int kq=0;
int maxx=-1e9;
int f(int h,int n)
{
    int s=0;
    for(int i=1;i<=n;i++)
    {
        if(A[i]>h)
        {
            s=s+A[i]-h;
        }
    }
    return s;
}
int main()
{
    freopen("WOOD.INP","r",stdin);
    freopen("WOOD.OUT","w",stdout);
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
    int n,x;
    cin>>n>>x;
    int key;
    for(int i=1;i<=n;i++)
    {
        cin>>A[i];
        if(A[i]>maxx)
        maxx=A[i];
    }
        int l=0;
        int r=maxx;
        while(l<=r)
        {
            int h=(l+r)/2;
            int x=f(h,n);
            int m=(l+r)/2;
            if(x==m)
            {
                kq=h;
                l=m+1;
                m=(l+r)/2;
            }
            else if(x>m)
            {
                kq=h;
                l=m+1;
                m=(l+r)/2;
            }
            else r=m-1;
        }
    
    cout<<kq;
}