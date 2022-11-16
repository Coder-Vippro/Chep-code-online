#include <bits/stdc++.h>
#define N int (1e7)
using namespace std;
int p[N+2];
int n;
void sangngto (int n) 
{
    fill(p,p+n+1,1); 
    p[0]=p[1]=0;
    for(int i=2;i*i<=n;i++)
    {
        if(p[i]==1)
        for(int j=i*i;j<=n;j+=i) p[j]=0;
    }
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
    int n;
    cin>>n;
    sangngto(n);
    for(int i=2;i<=n;i++)
    if(p[i]==1)cout<<i<<" ";
    return 0;
}