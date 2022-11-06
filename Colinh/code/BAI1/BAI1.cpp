#include <bits/stdc++.h>

using namespace std;
int n;
int main()
{
    cin>>n;
    while(n>0)
    {
        cout<<n%2;
        n=n/2;
    }
    return 0;
}
