#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    long long a,b;
    cin>>n;
    while(n>0)
    {
        cin>>a>>b;
        cout<<__gcd(a,b)<<endl;
        n--;
    }
}