#include <bits/stdc++.h>

using namespace std;
string A(long long n){
    int d=0;
    for(int i=1;i<=n;i++)if(n%i==0)d++;
    if(n%d==0)return"Co";else return"Khong";
}
int main()
{
    freopen("SODEP.inp","r",stdin);
    freopen("SODEP.out","w",stdout);
    long n,a;
    cin>>n;
    for(int i=1;i<=n;i++){
      cin>>a;cout<<A(a)<<'\n';;
    }
    return 0;
}
