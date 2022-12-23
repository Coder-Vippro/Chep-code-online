#include <bits/stdc++.h>
using namespace std;
int ts,ms,h;
int main()
{
    freopen("sotp.inp","r",stdin);
    freopen("sotp.out","w",stdout);
    cin>>h;
    for(int i=1;i<=h;i++)
    {
    cin>>ts>>ms;
    int a=__gcd(ts,ms);
    ms=ms/a;
    while(ms%2==0) ms=ms/2;
    while(ms%5==0) ms=ms/5;
    if(ms==1) cout<<0<<endl;else cout<<1<<endl;
    }
    return 0;
}
