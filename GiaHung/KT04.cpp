#include <bits/stdc++.h>

using namespace std;
int soNT(int x)
{
    if (x < 2)
        return 0;
    for (int i = 2; i <= sqrt(x); i++)
        if (x%i == 0)
            return 0;
    return 1;
}
int main()
{
     //freopen("KT04.inp","r",stdin);
    //freopen("KT04.out","w",stdout);
    int n,m,a[100],b[100],c=1,d=1;
    cin>>n>>m;
    for(int i=1;i<n;i++){
        if(n%i==0&&soNT(i)){a[d]=i;d++;cout<<i<<" ";}
}
for(int j=1;j<m;j++){
        if(m%j==0&&soNT(j)){b[c]=j;c++;cout<<j<<" ";}
}
if(a==b)cout<<1;
else cout<<0;
}
