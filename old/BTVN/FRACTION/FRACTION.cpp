#include <bits/stdc++.h>
using namespace std;
int main()
{
    //freopen("FRACTION.INP","r",stdin);
    //freopen("FRACTION.OUT","w",stdout);
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
    long long b,n;
    cin>>n>>b;
    long long d=0;
    for(int m=1;m<=2*n;m++)
    {
        if(m!=n && (2*b*m*n-b*m*m)%n*n==0)
        d++;
    }
    cout<<d;
}