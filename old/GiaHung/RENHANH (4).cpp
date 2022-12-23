#include <bits/stdc++.h>

using namespace std;

int main()
{
    freopen ("RENHANH.inp","r",stdin);
    freopen ("RENHANH.out","w",stdout);
    int a,b;
    cin>>a>>b;
    if(a%b==0)cout<<"yes";
    else cout<<a/b<<" "<<a%b;
    return 0;
}
