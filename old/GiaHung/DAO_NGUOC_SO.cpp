#include <bits/stdc++.h>
using namespace std;
int main()
{
    freopen("DAO_NGUOC_SO.inp", "r", stdin);
    freopen("DAO_NGUOC_SO.out", "w", stdout);
    int n,s=0;
    cin>>n;
    while(n>0){
        s=s*10+n%10;
        n/=10;
    }
    cout<<s;
    return 0;
}
