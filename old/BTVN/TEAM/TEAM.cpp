#include <bits/stdc++.h>
using namespace std;
long long C[1001][1001];
const int mod=1e9+7;
int main()
{
    freopen("TEAM.INP","r",stdin);
    freopen("TEAM.OUT","w",stdout);
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
    int a,b,x,y;
    cin>>a>>b>>x>>y;
    C[0][0]=C[1][0]=C[1][1]=1;
    for(int i=2;i<=1000;i++)
    {
        C[i][0]=C[i][i]=1;
    }
    for(int i=2;i<=1000;i++)
        for(int j=1;j<=i-1;j++)
            C[i][j]=(C[i-1][j-1]+C[i-1][j])%mod;
    int kq=0;
    int A,B;
    for(A=0;A<=min(a,x);A++)
    {
        B=x-A;
        if(abs(A-B)<=y)
        kq=(((C[a][A]*C[b][B])%mod)+kq)%mod;
    }
    cout<<kq;
    
    
    
    
} 
