#include <bits/stdc++.h>

using namespace std;
int k,s;
int main()
{
    cin>>k>>s;
    cout<<k*s/__gcd(k,s);
    return 0;
}
