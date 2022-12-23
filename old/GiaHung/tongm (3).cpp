#include <bits/stdc++.h>

using namespace std;

int main()
{
    freopen("tongm.inp","r",stdin);
    freopen("tongm.out","w",stdout);
    int n,s=0;
    cin>>n;
    for(int i=100;i<=999;i++)
    if(((i%10)+(i/10%10)+(i/100))==n) s++;
    cout<<s;
    return 0;
}
