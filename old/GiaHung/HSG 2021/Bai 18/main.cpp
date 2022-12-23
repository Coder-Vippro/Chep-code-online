#include <bits/stdc++.h>

using namespace std;
long long a,b,c;
int main()
{
    cin>>a>>b>>c;
    cout<<__gcd(a,__gcd(b,c))<<" "<<(a*b*c)/__gcd(a,__gcd(b,c));
    return 0;
}
