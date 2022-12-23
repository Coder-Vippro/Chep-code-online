#include <bits/stdc++.h>

using namespace std;

int main()
{
    freopen("hcnrong.inp","r",stdin);
    freopen("hcnrong.out","w",stdout);
    int m,n;
    cin>>m>>n;
    for(int i=1;i<=m;i++)
    {
        for(int k=1;k<=n;k++)
        if(i==m || k==n || i==1 || k==1)cout<<"*"; else cout<<" ";
        cout<<endl;
    }
    return 0;
}
