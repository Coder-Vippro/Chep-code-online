#include <bits/stdc++.h>

using namespace std;

int main()
{
    freopen("TIM_THE.inp","r",stdin);
    freopen("TIM_THE.out","w",stdout);
    long long n;
    cin>>n;
    long long a=n*4-1,s=0,x,sx=(n+1)*n/2*4;
    for(long long i=1;i<=a;i++){
        cin>>x;s=s+x;
    }
    cout<<sx-s;
    return 0;
}
