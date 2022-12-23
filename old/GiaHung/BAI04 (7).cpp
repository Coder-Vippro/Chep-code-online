#include <bits/stdc++.h>
using namespace std;

int main()
{
    freopen("BAI04.inp","r",stdin);
    freopen("BAI04.out","w",stdout);
    int n,s=0,d=0;
    cin>>n;
    for(int i=1;i<=n;i++){
        s=s+i;
        d++;
        if(s==n)break;
    }
    cout<<d;
}
