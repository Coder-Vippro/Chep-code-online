#include <bits/stdc++.h>

using namespace std;

int main()
{
    freopen("TONGCHANAB.inp","r",stdin);
    freopen("TONGCHANAB.out","w",stdout);
    long long a,b,c;
    cin>>a>>b;
    if(a%2==1) a=a+1;
    if(b%2==1) b=b-1;
    c=(b-a)/2+1;
    cout<<(b+a)*c/2;
    return 0;
}
