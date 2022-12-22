#include <bits/stdc++.h>

using namespace std;
int n,m;
int main()
{
    cin>>n>>m;
    int x=n,y=m;
    cout<<x/y<<'\n';
    cout<<x%y<<'\n';
    double k=1.0*x/y;
    cout<<fixed<<setprecision(2)<<x;

    return 0;
}
