#include <bits/stdc++.h>
using namespace std;
int y,k,n;
int main()
{
    freopen("BMARKET.INP","r",stdin);
    freopen("BMARKET.OUT","w",stdout);
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
    cin>>y>>k>>n;
    if(y==n || y>n)
    {
        cout<<-1;
        
    }
    for(int i=1;i<=n-y;i++)
    {
        if((y+i)%k==0)
        {
            cout<<i<<' ';
        }
    }
    

}