#include <bits/stdc++.h>
using namespace std;
 string x,y;
 long long f[1005][1005];
int main ()
{
    freopen("LCS.INP","r",stdin);
    freopen("LCS.OUT","w",stdout);
    cin>>x>>y;
    x=' '+x;
    y=' '+y;
    for(int i=1;i<x.size();i++)
    {
        for(int j=1;j<y.size();j++)
        {
            if(x[i]==y[j])
                f[i][j]=f[i-1][j-1]+1;
            else
                f[i][j]=max(f[i-1][j],f[i][j-1]);

        }
    }
    cout<<f[x.size()-1][y.size()-1];
    return 0;
}
