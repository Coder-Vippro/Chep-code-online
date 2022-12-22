#include <bits/stdc++.h>
using namespace std;
long long C[21][21];
int n,k;
int main()
{
    freopen("bai2.INP","r",stdin);
    freopen("bai2.OUT","w",stdout);
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
    cin>>n>>k;
    C[0][0]=C[1][0]=C[1][1]=1;
    for(int i=2;i<=21;i++)
    {
        C[i][0]=C[i][i]=1;
    }
    for(int i=2;i<=21;i++)
        for(int j=1;j<=i-1;j++)
            C[i][j]=C[i-1][j-1]+C[i-1][j];
    cout<<C[n][k];
    
}