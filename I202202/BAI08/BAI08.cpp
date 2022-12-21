#include <bits/stdc++.h>
#define N int (1e7)
using namespace std;
int p[N+2];
void sangngto (int n) //sang nguyen to
{
    fill(p,p+n+1,1); //phu toan bo mang p voi gia tri 1
    p[0]=p[1]=0;
    for(int i=2;i*i<=n;i++)
    {
        if(p[i]==1)
        for(int j=i*i;j<=n;j+=i) p[j]=0;
    }
}
int n;
int main()
{
    freopen("BAI08.INP","r",stdin);
    freopen("BAI08.OUT","w",stdout);
    cin>>n;
    sangngto(n);
    int tong=0;
    int dem=0;
    for(int i=n;i>=2;i--)
    {
        for(int j=n-1;j>=2;j--)
        {
            if(p[i]==1 && p[j]==1 && i+j==n && i<j)
            dem++;
            else if(p[i]==1 && p[j]==1 && p[n-i-j]==1 && i<j && j<n-i-j)
            dem++;
        }
    }
    cout<<dem;
    return 0;
}