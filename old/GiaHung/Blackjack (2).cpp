#include <bits/stdc++.h>

using namespace std;

int main()
{
    freopen("Blackjack.inp","r",stdin);
    freopen("Blackjack.out","w",stdout);
    double a,b,c;
    cin>>a>>b>>c;
    if(a+b+c<=22) cout<<"WIN";
    else cout<<"LOSE";
    return 0;
}
