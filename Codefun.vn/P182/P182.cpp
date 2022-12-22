#include <bits/stdc++.h>
using namespace std;
long long n;
int main()
{
    cin>>n;
    if(n==1)
    {
        cout<<0;
        return 0;
    }
    if(n%2==1)n=n-1;
    cout<<((n-2)/2+1)/2*(n+2);
}