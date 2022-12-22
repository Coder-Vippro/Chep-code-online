#include <bits/stdc++.h>
using namespace std;
int main()
{
    freopen("HAPPY.inp","r",stdin);
    freopen("HAPPY.out","w",stdout);
    long long n,d,s=1;
    cin>>d>>n;
    for(int i=1;i<=d;i++)s=s*100;
    cout<<(n/n*2)*s;
    return 0;
}
