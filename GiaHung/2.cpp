#include <bits/stdc++.h>

using namespace std;

int main()
{
    freopen("chiahet3.inp","r",stdin);
    freopen("chiahet3.out","w",stdout);
    int a,b;
    cin>>a>>b;
     int cs=(a*b)%100;
   if(cs%3==0) cout<<"YES";
    else cout<<"NO";
    return 0;
}
