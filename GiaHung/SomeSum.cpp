#include <bits/stdc++.h>
using namespace std;

int main()
{
    freopen("SomeSum.inp","r",stdin);
    freopen("SomeSum.out","w",stdout);
    int n;
    cin>>n;
    if(n==2) cout<<"Odd";
    else if(n%2!=0) cout<<"Either";
    else if(n%2==0) cout<<"Even";
    return 0;
}
