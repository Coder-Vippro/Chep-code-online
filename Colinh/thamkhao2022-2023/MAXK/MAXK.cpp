#include <iostream>
#include <cstdio>
#include <algorithm>
using namespace std;
int A[100001];
int n,k;
int main()
{
    freopen("MAXK.INP","r",stdin);
    freopen("MAXK.OUT","w",stdout);
    cin>>n>>k;
    for(int i=1;i<=n;i++)
    {
        cin>>A[i];
    }
    sort(A+1,A+n+1);
    for(int i=n;i>0;i--)
    {
        if(A[i]!=A[i-1])
        {
            k--;
        }
        if(k==0){cout<<A[i];return 0;}
    }
    //nhap tung phan tu va day vao mang
    //xap xep day giam dan
    //kq la so o vi tri thu k
}