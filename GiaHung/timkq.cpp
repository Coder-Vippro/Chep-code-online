#include <bits/stdc++.h>

using namespace std;

int main()
{
    freopen("timkq.inp","r",stdin);
	freopen("timkq.out","w",stdout);
	int a,b;
    cin>>a>>b;
    cout<<(a+b)*(a+b)/(a-b)<<" "<<(a+b)*(a+b)%(a-b);
    return 0;
}
