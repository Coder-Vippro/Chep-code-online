#include <bits/stdc++.h>
using namespace std;
int m=pow(10,5);
bool Nto[m];
int snt[m];
int main()
{
    //freopen("Bai04.inp","r",stdin);
    //freopen("Bai04.out","w",stdout);
    int n,d=0,e=0;
    cin>>n;
    memset(Nto,1,m);
    for (int i=2;i<=m;i++)if(Nto[i]==1)for(int j = 2 * i; j <= n; j += i){Nto[j]=0;}
    for(int i=2;i<=n*n*n;i++){
        if(Nto[i]==1){
            d++;
            if(Nto[d]==1){
            e++;
            snt[e]=i
            }
        }
    }
cout<<snt[n];
    return 0;
}
