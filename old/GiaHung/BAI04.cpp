#include <bits/stdc++.h>

using namespace std;
bool Sodep(int n){int s=0;
for(int i=1;i<=n;i++){
        s=s+i;if(s==n)return 1;
}
return 0;
}
int main()
{
    freopen("BAI04.inp","r",stdin);
    freopen("BAI04.out","w",stdout);
    int n,dem=0;
    cin>>n;
    for(int i=2;i<=n;i++)if(Sodep(i)==1)dem++;
    cout<<dem;
    return 0;
}
