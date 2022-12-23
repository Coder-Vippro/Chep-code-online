#include <bits/stdc++.h>

using namespace std;

int main()
{
    freopen("BAI60922.INP","r",stdin);
    freopen("BAI60922.OUT","w",stdout);
    int a,b,c;
    cin>>a>>b;
    a=a/__gcd(a,b);
    b=b/__gcd(a,b);
    a=a%b;
    for(int i=1;i<=22;i++){
        c=a*10/b;
        a=a*10%b;
    }
    cout<<c;
    return 0;
}
