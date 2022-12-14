#include <bits/stdc++.h>

using namespace std;

int main()
{
    //freopen("KTVONGN.inp","r",stdin);
	//freopen("KTVONGN.out","w",stdout);
    char kt;
    int n;
    cin>>kt>>n;
    n=n%24;
    int a=int(kt)+n;
    cout<<char(a);
    return 0;
}
