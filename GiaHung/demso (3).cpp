#include <bits/stdc++.h>

using namespace std;

int main()
{
    freopen("demso.inp","r",stdin);
    freopen("demso.out","w",stdout);
    int n,s=0;
    cin>>n;
    for(int i=100;i<=999;i++)
    if(((i%10)+(i/10%10)+(i/100))==n) s++;
    cout<<s;
    return 0;
}
