#include <bits/stdc++.h>

using namespace std;

int main()
{
    freopen("tongday.inp","r",stdin);
    freopen("tongday.out","w",stdout);
    int n,a=0,b;
    cin>>n;
    for(int i=1;i<=n;i++){
        b=2*i+1;
        a=a+b;
    }
    cout<<a+1;
    return 0;
}
