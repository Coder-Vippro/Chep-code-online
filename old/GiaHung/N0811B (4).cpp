#include <bits/stdc++.h>

using namespace std;

int main()
{
    freopen("N0811B.inp","r",stdin);
    freopen("N0811B.out","w",stdout);
    int a,b,x,s=0,dem=0;
    cin>>a>>b;
    for(int i=a;i<=b;i++){
            x=i;
        while(x==0){
            s=s+x%10;
            x=x/10;
        }
        if(x%2==0)dem++;
    }
    cout<<dem;
    return 0;
}
