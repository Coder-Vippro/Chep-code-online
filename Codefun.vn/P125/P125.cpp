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
    int m,n,k;
    cin>>n>>m;
    while(m--)
    {
        cin>>k;
        sangngto(k);
        if(n%k==0 && p[k]==1)
        cout<<"YES"<<endl;
        else cout<<"NO"<<endl;
    } 
}