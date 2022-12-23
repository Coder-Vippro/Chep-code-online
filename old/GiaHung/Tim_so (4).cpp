#include <bits/stdc++.h>

using namespace std;

int main()
{
    freopen("Tim_so.inp","r",stdin);
    freopen("Tim_so.out","w",stdout);
    int m,a,b,d=0;
    cin>>m;
    for(a=1;a<10;a++){
         for(b=1;b<10;b++){if(a*b==m)break;}
         if(a*b==m){d++; break;}
    }
    if(d==1)cout<<a<<b;
    else cout<<-1;
    return 0;
}
