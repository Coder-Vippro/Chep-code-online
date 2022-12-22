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
bool kt(int n)
{
    int tong=0;
    while(n>0)
    {
        tong=tong+n%10;
        n=n/10;
    }
    if(tong%2==0 && tong%10!=0)return true;
    else return false;
}
int main()
{
    freopen("roundpri.INP","r",stdin);
    freopen("roundpri.OUT","w",stdout);
    int n;
    cin>>n;
    sangngto(n);
    int dem=0;
    for(int i=1;i<=n;i++)
    {
        if(p[i]==1 && i<10)
            dem++;
        else if(p[i]==1 && kt(i)==true)
            dem++;
    }
    cout<<dem;
    return 0;
}
