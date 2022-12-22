#include <bits/stdc++.h>

using namespace std;
bool KT(int a){
    int b=a*a;
while(a>0){
    if(a%10!=b%10)return 0;
    a=a/10;b=b/10;
}
return 1;
}
int main()
{
    freopen("LUCASA.inp","r",stdin);
    freopen("LUCASA.out","w",stdout);
    long long x,y,n,s=0;
    cin>>n;
    for(int i=1;i<=n;i++){cin>>x>>y;s=0;
    for(int i=min(x,y);i<=max(x,y);i++)if(KT(i))s++;
    cout<<s<<'\n';
    }
    return 0;
}
