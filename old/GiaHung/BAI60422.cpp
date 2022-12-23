#include <bits/stdc++.h>
using namespace std;
int main()
{
    freopen("BAI60422.inp","r",stdin);
    freopen("BAI60422.out","w",stdout);
    int a,s=1,i=2,n;
    cin>>n;
    while(s<n){
        s=s+i;
        i++;
        cout<<s<<" ";
    }
    cout<<i-2;
    return 0;
}
