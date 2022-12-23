#include <bits/stdc++.h>
using namespace std;
int tonguoc(int n)
{
    int t=1;
    for (int i=2;i<=sqrt(n);i++ ) {
        if (n%i==0) {
            if (i==n/i) t=t+i;
            else t=t+i+n/i;
        }
    }
    return t;
}
int main()
{
   freopen("N1016C.inp","r",stdin);
   freopen("N1016C.out","w",stdout);
    int a,b,d=0;
    cin>>a>>b;
    for (int i=a;i<=b;i++) {
        if (tonguoc(i)>i) d++;
    }
    cout<<d;
}
