#include <bits/stdc++.h>

using namespace std;

int main()
{
    freopen("Collatz.inp","r",stdin);
    freopen("Collatz.out","w",stdout);
    int n,dem=0;
    cin>>n;
    while(n!=1){
        if(n%2==0) n=n/2;
        else n=n*3+1;
        dem++;
    }
    cout<<dem;
    return 0;
}
