#include <bits/stdc++.h>

using namespace std;

int main()
{
    freopen("TIMUOC.inp","r",stdin);
	freopen("TIMUOC.out","w",stdout);
    int a;
    cin>>a;
    for(int i=1;i<=a;i++){
        if(a%i==0)cout<<i<<endl;
    }
    return 0;
}
