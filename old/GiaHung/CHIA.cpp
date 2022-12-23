#include <bits/stdc++.h>

using namespace std;

int main()
{
    freopen("CHIA.inp","r",stdin);
    freopen("CHIA.out","w",stdout);
    long long a,n,x[69],d=0;
    for(int i=0;i<=68;i++)x[i]=0;
    cin>>n;
    for(int i=1;i<=n;i++){
    cin>>a;
    x[a%68]++;
    }
    for(int i=0;i<=68;i++)if(x[i]>0)d++;
    cout<<d;
    return 0;
}
