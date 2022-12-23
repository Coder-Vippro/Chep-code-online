#include <bits/stdc++.h>
using namespace std;
int a,b,c;
int main()
{
    freopen("BAI02.INP","r",stdin);
    freopen("BAI02.OUT","w",stdout);
    cin>>a>>b>>c;
    if(c+1>59 && b+1>59 && a+1>23)cout<<0<<' '<<0<<' '<<0;
    else if(c+1>59 && b+1>59)cout<<a+1<<' '<<0<<' '<<0;
    else if(c+1>59 && b+1<=59)cout<<a<<' '<<b+1<<' '<<0;
    else if(c+1<=59)cout<<a<<' '<<b<<' '<<c+1;
    
}