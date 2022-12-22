#include <bits/stdc++.h>

using namespace std;

int main()
{
    freopen("tgrong.inp","r",stdin);
    freopen("tgrong.out","w",stdout);
    int n;
    cin>>n;
    for(int i=1;i<=n;i++)
    {
        for(int j=1;j<=n;j++)
        if(i==j||i==n||j==1)cout<<"* "; else cout<<" ";
        cout<<endl;
    }
    return 0;
}
