#include <bits/stdc++.h>

using namespace std;
int NT(int n) {
    if(n<2) return 0;
    for(int i=2;i*i<=n;i++)if(n%i==0)return 0;
    return 0;
}
int SNT(int n) {
    while(n>0){
        if(NT(n)==0)return 0;
        n=n/10;
    }
    return 1;
}
int main()
{
    freopen("Sieunguyento.inp","r",stdin);
    freopen("Sieunguyento.out","w",stdout);
    int a;
    cin>>a;
    if(SNT(a)==1)cout<<"YES";
    else cout<<"NO";
    return 0;
}
