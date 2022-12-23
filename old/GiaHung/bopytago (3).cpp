#include <bits/stdc++.h>
using namespace std;
int main()
{
    freopen("Bopytago.inp","r",stdin);
    freopen("Bopytago.out","w",stdout);
    int a,b,c,n;
    cin>>n;
    for(int a=1;a<=n;a++)
       for(int b=a+1;b<=n;b++)
            for(int c=b+1;c<=n;c++)
                if(a*a+b*b==c*c) cout<<a<<" "<<b<<" "<<c<<endl;
    return 0;
}
