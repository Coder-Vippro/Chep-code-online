#include <bits/stdc++.h>

using namespace std;
long long n,a,b,c;
long long C(long long k,long long n)
{
    if(k==0||k==n) return 1;
    if(k==1) return n;
    return C(k-1,n-1)+C(k,n-1);
}
int main()
{
    freopen("KT05.inp","r",stdin);
    freopen("KT05.out","w",stdout);
    cin>>a>>b;
    cout<<C(3,a+b+3)<<"";
    cout<<C(4,a)*C(4,b)*3<<"";
    cout<<C(1,a)*C(3,b)+C(1,b)*C(3,a)+3*C(3,b)+3*C(3,a)+C(1,a)+C(1,b)+C(2,a)*C(2,b)+3*C(2,b)+3*c(2,a)<<"";
    cout<<C(1,a)*C(3,b)+C(1,b)*C(3,a)+3*C(3,b)+3*C(3,a)+C(1,a)+C(1,b)+C(2,a)*C(2,b)+3*C(2,b)+3*c(2,a)+C(4,a)+C(4,b);
    return 0;
}






