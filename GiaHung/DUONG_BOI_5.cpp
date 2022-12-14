#include <bits/stdc++.h>

using namespace std;

int main()
{
    freopen("DUONG_BOI_5.inp","r",stdin);
    freopen("DUONG_BOI_5.out","w",stdout);
    int n,a,b=0;
    cin>>n;
    for(int i=1;i<=n;i++) {
        cin>>a;
        if(a>0&&a%5==0)b++;}
    cout<<b;
    return 0;
}
