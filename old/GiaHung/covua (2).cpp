#include <bits/stdc++.h>
using namespace std;
int main()
{
    freopen("covua.inp","r",stdin);
    freopen("covua.out","w",stdout);
    int n;
    cin>>n;
    for(int d=1;d<=n;d++){
        for(int c=1;c<=n;c++)
            if((d+c)%2==0)cout<<"W"; else cout<<"B";
        cout<<endl;
    }
    return 0;
}
