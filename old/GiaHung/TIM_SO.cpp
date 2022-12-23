#include <bits/stdc++.h>

using namespace std;

int main()
{
    freopen("TIM_SO.inp","r",stdin);
    freopen("TIM_SO.out","w",stdout);
    int n;
    cin>>n;
    cout<<2*n-1<<", ";
    for(int i=1;i<=n;i++)
        if((2*i-1)%3>0) cout<<2*i-1<<" ";
    return 0;
}
