#include <bits/stdc++.h>
using namespace std;
long long soCP(long double a,long double b){
  long long s=(long long)(sqrt(b))-(long long)(sqrt(a-1));
    return s;
}
int main()
{
    //freopen("N0410A.inp","r",stdin);
    //freopen("N0410A.out","w",stdout);
    long long n,s=0,m;
    cin>>n>>m;
    cout<<soCP(s);
    return 0;
}
