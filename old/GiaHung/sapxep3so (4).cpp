#include <bits/stdc++.h>
using namespace std;
int main()
{
    freopen("sapxep3so.inp","r",stdin);
    freopen("sapxep3so.out","w",stdout);
    long long a,b,c,solon,sonho;
    cin>>a>>b>>c;
    solon=a;sonho=a;
    if(b>solon)solon=b;
    if(c>solon)solon=c;
    if(b<sonho)sonho=b;
    if(c<sonho)sonho=c;
    cout<<sonho<<" "<<a+b+c-sonho-solon<<" "<<solon;
   return 0;
}
