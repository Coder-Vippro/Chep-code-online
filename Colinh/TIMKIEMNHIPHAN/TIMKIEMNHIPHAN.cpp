#include <bits/stdc++.h>

using namespace std;
int a[100001];
int tknp(int d,int c,int x)
{
    while(d<=c)
    {
        int mid=(d+c)/2;
        if(x==a[mid])return mid;
        if(x<a[mid])c=mid-1;
        else d=mid+1;
    }
    return 0;
}
int main()
{
    int n,x;
    cin>>n>>x;
    for(int i=1;i<=n;i++)
    {
        cin>>a[i];
    }
    cout<<tknp(1,n,x);
    return 0;
}
