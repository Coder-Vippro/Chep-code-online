#include <bits/stdc++.h>
#define N int(1e7)
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
int tcs(int n)
{
    int dem=0;
    while(n>0)
    {
        n=n/10;
        dem++;
    }
    return dem;
}
int main()
{
    long long n;
    cin>>n;
    sangngto(n);
    if(p[n]==1)
    {
        cout<<"GOOD"<<endl;
        cout<<tcs(n);
    }
    else cout<<"BAD";
}