#include<bits/stdc++.h>

using namespace std;

int main()
{
    freopen("SCS.inp","r",stdin);
    freopen("SCS.out","w",stdout);
    int n,dem=0,tcs=0,u=n;
    cin>>n;
    while(u!=0){
        dem++;
            tcs=tcs+u%10;
            u=u/10;
    }
    cout<<dem<<endl<<tcs;
    return 0;
}
