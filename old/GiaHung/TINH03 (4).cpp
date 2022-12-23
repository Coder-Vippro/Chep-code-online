#include <bits/stdc++.h>
using namespace std;
bool Nto[100000];
int Mersen(int n){
 int i=0;
 n+=1;
 while(n>pow(2,i))i++;
 if (n==pow(2,i))return 1;
 else return 0;
}
int main()
{
    freopen("TINH03.inp","r",stdin);
    freopen("TINH03.out","w",stdout);
    int n,d=0,e=0;
    cin>>n;
    memset(Nto,1,10000);Nto[1]=0;
    for (int i=2;i<=100000;i++)if(Nto[i]==1)for(int j = 2 * i; j <= n; j += i){Nto[j]=0;}
    for(int i=2;i<=n;i++)if(Nto[i]==1&&Mersen(i)==1)cout<<i<<" ";
    return 0;
}
