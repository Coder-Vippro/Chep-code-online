#include <iostream>

using namespace std;
string a;
string b;
int main()
{
    freopen("XAU31.INP","r",stdin);
    freopen("XAU31.OUT","w",stdout);
    cin>>a>>b;
    if(a==b)cout<<0;
    else if(a>b)cout<<1;
    else if(a<b)cout<<-1;
    return 0;
}
