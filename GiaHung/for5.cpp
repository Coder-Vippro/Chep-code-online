#include <bits/stdc++.h>
using namespace std;
int main()
{
    freopen("for5.inp","r",stdin);
    freopen("for5.out","w",stdout);
    int n,s=0;
    cin>>n;
    for(int i=1;i<=n;i++)
    {
        if(n%i==0) s+=i;
    }
    cout<<s;
    return 0;
}
