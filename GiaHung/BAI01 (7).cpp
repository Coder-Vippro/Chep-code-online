#include <bits/stdc++.h>
using namespace std;

int main()
{
    freopen("BAI01.inp","r",stdin);
    freopen("BAI01.out","w",stdout);
    int n,s=0;
    cin>>n;
    for(int i=n-1;i>0;i--){
        s=s+i;
    }
    cout<<s;
}
