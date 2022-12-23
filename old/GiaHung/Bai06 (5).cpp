#include <bits/stdc++.h>
using namespace std;
int main()
{
    freopen("Bai06.inp","r",stdin);
    freopen("Bai06.out","w",stdout);
    int n,a,b,m=1e9,c,d,e,f;
    cin>>n>>c>>b>>a;
    for(int i=n/45;i>=0;i--){
        for(int j=n/30;j>=0;j--){
            for(int k=n/16;k>=0;k--){
                if(i*a+j*b+k*c<m&&i*45+j*30+k*16>=n){
                 d=i;e=j;f=k;m=i*a+j*b+k*c;
                }
            }
        }
    }
    cout<<m<<" "<<f<<" "<<e<<" "<<d;
    return 0;
}
