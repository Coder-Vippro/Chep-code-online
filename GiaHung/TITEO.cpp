#include <bits/stdc++.h>
using namespace std;
int main()
{
	freopen("TITEO.inp","r",stdin);
	freopen("TITEO.out","w",stdout);
    int a,b,k,x,y;
    cin>>a>>b>>k>>x>>y;
    double a1=a;
    for(int n;n<k;n++)
    {
        if(a<=b) a=a+x;
        else b=b+y;
    }
    if(a!=b) cout<<"-1";
    else cout<<(a-a1)/x;
}
