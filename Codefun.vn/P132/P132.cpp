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

int main()
{
    int a,b;
    cin>>a>>b;
    sangngto(__gcd(a,b));
    if(p[__gcd(a,b)]==1)
    cout<<"yes";
    else cout<<"no";
}