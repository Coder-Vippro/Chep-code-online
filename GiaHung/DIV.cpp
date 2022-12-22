#include <bits/stdc++.h>

using namespace std;
bool KT(long long a){
int s=0,n=a;
while(n>0){
    s=s+n%10;
    n=n/10;
}
if(a%s==0)return 1;
else return 0;
}
int main()
{
    freopen("DIV.inp","r",stdin);
    freopen("DIV.out","w",stdout);
    long long n;
    cin>>n;
    if(KT(n))cout<<"YES";
    else cout<<"NO";
    return 0;
}
