#include <bits/stdc++.h>
using namespace std;
int main()
{
    freopen("quyluat.inp","r",stdin);
    freopen("quyluat.out","w",stdout);
    long long m,n,s=1;
    cin>>n>>m;
    cout<<1<<endl;
    for(int i=1;i<n;i++)
    {
        s=s+m;
        cout<<s<<endl;
    }
    return 0;
}
