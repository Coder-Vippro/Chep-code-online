#include <bits/stdc++.h>
using namespace std;
int main()
{
    freopen("Bai02.inp","r",stdin);
    freopen("Bai02.out","w",stdout);
    int n,c=0,l=0;
    cin>>n;
    for(int i=1;i<=n;i++){
            if(i%2==0)c++;
            else l++;
    }
    cout<<c<<l;
    return 0;
}
