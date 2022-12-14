#include <bits/stdc++.h>

using namespace std;

int main()
{
    freopen("upcase.inp","r",stdin);
    freopen("upcase.out","w",stdout);
    char k;
	cin>>k;
	if(k>='A' && k<='Z') cout<<k;
	else cout<<char(k-32);
    return 0;
}
