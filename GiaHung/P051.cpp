#include <bits/stdc++.h>

using namespace std;
int a,b;
int main()
{
    cin>>a>>b;
    cout<<a/__gcd(a,b)<<' '<<b/__gcd(a,b);
    return 0;
}