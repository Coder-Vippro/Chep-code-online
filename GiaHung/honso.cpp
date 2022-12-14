#include <bits/stdc++.h>

using namespace std;

int main()
{
    freopen("honso.inp","r",stdin);
    freopen("honso.out","w",stdout);
    int a,b;
    cin>>a>>b;
    if(a%b==0) cout<<-1;
    else cout<<a/b<<endl<<a%b<<"/"<<b;
    return 0;
}
