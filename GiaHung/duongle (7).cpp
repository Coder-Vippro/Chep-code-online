#include <bits/stdc++.h>

using namespace std;

int main()
{
    freopen("DUONGLE.inp","r",stdin);
    freopen("DUONGLE.out","w",stdout);
    int a=0,n,c;
    cin>>n;
    for(int i=n;i>=0;i--){

        if(i%2==1)a=a+i;
    }
    if(n%2==0)cout<<a;
else cout<<a-n;
    return 0;
}
