#include <bits/stdc++.h>
using namespace std;
int main()
{
    freopen("VIETCHAN.inp","r",stdin);
    freopen("VIETCHAN.out","w",stdout);
    int n;
    cin>>n;
    int a=n*2;
    for(int i=1;i<=a;i++)
        if(i%2==0) cout<<i<<endl;
    return 0;
}
