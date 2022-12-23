#include <bits/stdc++.h>

using namespace std;

int main()
{
    freopen("somesum.inp","r",stdin);
    freopen("somesum.out","w",stdout);
    int n;
    cin>>n;
    if(n==2) cout<<"Odd";
    else if(n%2!=0) cout<<"Either";
    else cout<<"Even";
    return 0;
}
