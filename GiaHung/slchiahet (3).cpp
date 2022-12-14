#include <bits/stdc++.h>

using namespace std;

int main()
{
    freopen("slchiahet.inp","r",stdin);
	freopen("slchiahet.out","w",stdout);
    int n,k,s=0;
    cin>>n>>k;
    for(int i=1;i<=n;i++)
        if(i%k==0) s++;
    cout<<s;
    return 0;
}
