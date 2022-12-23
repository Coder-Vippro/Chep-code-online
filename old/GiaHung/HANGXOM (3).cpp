#include <bits/stdc++.h>
using namespace std;
int main()
{
    freopen("HANGXOM.inp","r",stdin);
    freopen("HANGXOM.out","w",stdout);
    int a,b,c;
    cin>>a>>b>>c;
    if(a%c==b%c) cout<<"YES";
    else cout<<a%c+b%c;
    return 0;
}
