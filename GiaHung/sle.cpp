#include <bits/stdc++.h>
using namespace std;
int main()
{
    freopen("sle.inp","r",stdin);
    freopen("sle.out","w",stdout);
    int n,s=0,so=1;
    cin>>n;
    while(s<n){
    s=s+so;
    so=so+2;
    }
    cout<<s;
    return 0;
}
