#include <bits/stdc++.h>
using namespace std;
int main()
{
    freopen("DUONGLE.inp","r",stdin);
    freopen("DUONGLE.out","w",stdout);
    int n,sum=0;
    cin>>n;
    for(int i=1;i<=n;i=i+2)
        {
            sum=sum+i;
        }
        cout<<sum;
    return 0;
}
