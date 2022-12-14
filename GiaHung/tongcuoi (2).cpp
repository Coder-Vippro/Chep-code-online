#include <bits/stdc++.h>
using namespace std;
int main()
{
    freopen("tongcuoi.inp","r",stdin);
    freopen("tongcuoi.out","w",stdout);
    long long a,hdv,hc,ht;
    cin>>a;
    ht=a/100;
    hc=(a/10)%10;
    hdv=a%10;
    if(a<10) cout<<0;
    if(a>=10 && a<100) cout<<hc+hdv;
    if(a>=100) cout<<hc+hdv;
    return 0;
}
