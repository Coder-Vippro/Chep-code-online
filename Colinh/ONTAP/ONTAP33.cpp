#include <bits/stdc++.h>
using namespace std;
int n,m;
int main()
{
    freopen("ONTAP33.INP","r",stdin);
    freopen("ONTAP33.OUT","w",stdout);
    cin>>n>>m;
    for(int i=1;i<=n;i++)
        {
            for(int j=1;j<=m;j++)
            {
                if(i==1 || i==n)
                {
                    cout<<'*';
                }
                else if(j==1 || j==m)
                {
                    cout<<'*';
                }
                else cout<<' ';
            }
            cout<<'\n';
        }
}