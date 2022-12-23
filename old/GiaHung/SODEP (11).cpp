#include <bits/stdc++.h>
using namespace std;
int Sodep(int n){
    int dem=0;
for(int i=1;i<=n;i++)if(n%i==0)dem++;
    if(n%dem==0)return 1;
    else return 0;
}
int main()
{
    freopen("SODEP.inp","r",stdin);
    freopen("SODEP.out","w",stdout);
    int n,a;
    cin>>n;
    for(int i=1;i<=n;i++){
    cin>>a;
    if(Sodep(a))cout<<"Co";
    else cout<<"Khong";
    cout<<'\n';
    }
    return 0;
}
